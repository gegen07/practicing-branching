#include <stdio.h>
#include <stdlib.h>

int main(){

    //Definindo variaveis
    int linhas = 3, colunas = 4;
    int **matriz, i, j;

    matriz = (int**) malloc(linhas*sizeof(int *));

    //Alocando memoria para colunas
    for(i=0;i<linhas;i++){
        matriz[i] = (int*) malloc(colunas*sizeof(int));
    }
    return 0;
}
