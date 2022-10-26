#include <stdio.h>
#define TAM 10

int main(){
	int i, aux, contador, numeros[TAM];
	
	for (i = 0; i < TAM; i++) {
		scanf("%d", &numeros[i]);
	}
	
	
	for (contador = 1; contador < TAM; contador++) {
		for (i = 0; i < TAM - 1; i++) {
			if (numeros[i] > numeros[i + 1]) {
				aux = numeros[i];
				numeros[i] = numeros[i + 1];
				numeros[i + 1] = aux;
			}
		}
	}
	
	for (i = 0; i < TAM; i++) {
		printf("%d", numeros[i]);
	}
	
	return 0;
}
