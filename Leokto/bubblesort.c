#include <stdio.h>
int main(){
    int vetor[10];
    for(int i = 0; i < 10; i++){
        scanf("%i", &vetor[i]);
    }
    for(int i = 0; i < 9; i++){
        if (vetor[i] > vetor[i + 1]){
            int aux = vetor[i];
            vetor[i] = vetor[i + 1];
            vetor[i + 1] = aux;
        }
    }
    for(int i = 0; i < 10; i++){
        printf("[%i] \n", vetor[i]);
    }
}