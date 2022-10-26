#include <stdio.h>
int main(){
    int vetor[]={5, 6, 7, 8, 9, 10};
    for(int i =0; i<6;i++){
        vetor[i+1]=vetor[i]+vetor[i+1];
    }
    
    for(int i=0; i<6;i++) printf("%d ", vetor[i]);
    return 0;
}