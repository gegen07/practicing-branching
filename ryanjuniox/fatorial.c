#include <stdio.h>

int fatorial(int);

int main(){
	
	int cont=0; 
	int numero;
	scanf("%d", &numero);
	printf("%d", fatorial(numero));
	return 0;
	
}

int fatorial(int numero){
	
	int cont=0;
	if(numero == 1){
		return 1;
	}
	else{
		return numero * fatorial(numero-1);
	}
}