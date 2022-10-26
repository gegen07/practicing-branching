#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,n,aux;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor[n];
    for(i=0;i<n;i++)
        scanf("%d",&vetor[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(vetor[j]>vetor[i]){
                aux=vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",vetor[i]);
}