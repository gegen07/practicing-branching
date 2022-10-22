#include <stdio.h>

int main(){
    
    int vetor[] = {3, 5, 2, 1, 6}, i, j, aux;
    for(i=1;i<5;i++){
        for(j=0;j<4;j++){
            	if(vetor[j]>vetor[j+1]){
                    aux=vetor[j];
                    vetor[j]=vetor[j+1];
                    vetor[j+1]=aux;
                }
        }
    }
for(i=0;i<5;i++) printf("%d ", vetor[i]);
    
    return 0;
}