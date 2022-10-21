#include <stdio.h>

int main(){
	
	int N, i, soma=0;
	scanf("%d", &N);
	
	int vetor[N];
	int vetor2[N];
	
	for(i=0; i<N; i++){
		printf("Defina o elemento %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<N; i++){
		soma += vetor[i];
		vetor2[i] = soma;
		
	}
	
	for(i=0; i<N; i++){
		printf("%d ", vetor2[i]);
	}
	
	
	
	
	
}