#include<stdio.h>

#include<stdlib.h>

main()

{

int n[10],x,soma;

soma=0;

for(x=1;x<=10;x++)

{

printf("digite o %d°número :

",x);

scanf("%d",&n[x]);

soma=soma + n[x];

}

printf ("\n A soma dos números é de :

%d",soma);

printf("\n");

system("pause");

}