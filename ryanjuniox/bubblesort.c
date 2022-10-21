#include <stdio.h>

int main(){
	
	int temp, N, i, a, j;
	scanf("%d", &N);
	int vetor[0], vetor2[0];
	for(i=0; i<N; i++){
		scanf("%d", &a);
		vetor[i] = a;
		vetor2[i] = a;
	}
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(vetor[j] > vetor[j+1]){
				temp = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = temp;
			}
		}
	}
	for(i=0; i<N; i++){
		printf("%d ", vetor[i]);
	}
}