#include <stdio.h>

int main(void){
    
    int i, j, A[4], aux;

    //preencher vetor
    for(i=0;i<4;i++){
        printf("Digite valor para posicao %d: ", i);
        scanf("%d", &A[i]);
    }

    //ordenacao
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(A[i] > A[j]){
                aux = A[j];
                A[j] = A[i];
                A[i] = aux;
            }
        }
    }

    //imprimir vetor
    for(i=0;i<4;i++){
        printf("%d ", A[i]);
    }

    printf("\n");
}