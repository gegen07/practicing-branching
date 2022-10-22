#include <stdio.h>
int main(){
    int vetor[6];
    for(int i = 0; i < 6; i++){
        printf("Digita um valor: ");
        scanf("%i", &vetor[i]);
    }
    for(int i = 1; i < 6; i++){
        vetor[i] += vetor[i-1];
    }
    for(int i = 0; i <6; i++){
        printf("[%i] ", vetor[i]);
    }
    return 0;
}