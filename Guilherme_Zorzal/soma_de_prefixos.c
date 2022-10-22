#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont, c, N = 6, vet[20],vet_aux[20];

    printf("Digite 20 numeros: \n");
    for (c=0;c<N;c++){
        scanf("%d",&vet[c]);
    }
    vet_aux[0] = vet[0];

    for (c=1; c<N; c++){
        vet_aux[c] = vet_aux[c-1] + vet[c];
    }
    for (c = 0; c<N; c++){
        printf("%d\n",vet_aux[c]);
    }
    return 0;
}
