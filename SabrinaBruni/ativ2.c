#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,n,aux;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor[n];
    for(i=0;i<n;i++)
        scanf("%d",&vetor[i]);
    for(i=1;i<n;i++){
        vetor[i]+=vetor[i-1];
    }
    for(i=0;i<n;i++)
        printf("%d ",vetor[i]);
}