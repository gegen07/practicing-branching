var randomNumber = Math.round(Math.random() * 100);
if (randomNumber === 0) {
  randomNumber = 1;
}
var readline = require("readline");

var rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

var numeroTentativas = 10;
var tentativasUsadas = 0;

console.log("--------NOVO JOGO--------");
pergunta();
//console.log(randomNumber);
function tryAgain() {
  rl.question("Deseja tentar novamente?\n1) Sim\n2) Não \n", function (tentar) {
    tentar = parseInt(tentar);
    if (tentar === 1) {
      tentativasUsadas = 0;
      randomNumber = Math.round(Math.random() * 100);
      if (randomNumber === 0) {
        randomNumber = 1;
      }
      //console.log(randomNumber);
      console.log("--------NOVO JOGO--------");
      pergunta();
    } else {
      console.log("Obrigado por jogar !!!");
      rl.close();
    }

  })

};

function pergunta() {
  rl.question("--------ADVINHE O NÚMERO--------\nDigite um número de 1 a 100: ", function (numero) {
    numero = parseInt(numero);
    tentativasUsadas++;
    if (numero === randomNumber) {
      console.log("Você acertou o numero!!\nTentativas utilizadas: ", tentativasUsadas);
      tryAgain();
    } else if (tentativasUsadas === numeroTentativas) {
      console.log("Que pena, suas tentativas acabaram !!");
      console.log("O Número sorteado era ", randomNumber);
      tryAgain();
    } else if (numero > randomNumber) {
      console.log("Número errado, número digitado é maior que o sorteado ");
      console.log("Você ainda tem " + (numeroTentativas - tentativasUsadas + " tentativas"));
      pergunta();
    } else {
      console.log("Número errado, número digitado é menor que o sorteado ");
      console.log("Você ainda tem " + (numeroTentativas - tentativasUsadas + " tentativas"));
      pergunta();
    }

  }
  )
};