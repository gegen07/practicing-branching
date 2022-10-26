#include <stdio.h>
#define TAM 6

int main(){
    
    int i, cont, v[20], vAux[20];

    printf("Digite 20 numeros:\n");
    
    for (i = 0; c < TAM; i++)
        scanf("%d", &v[i]);
    
    veux[0] = v[0];

    for ( i = 1; i < TAM; i++)
        vAux[i] = vAux[i-1] + v[i];
    
    for (i = 0; i < TAM; i++)
        printf("%d\n", vAux[i]);
    
    return 0;
}
