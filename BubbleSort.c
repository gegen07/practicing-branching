#include <stdio.h>
int main(void){

    int k, n, j, aux, vetor[7];

    for (k=1; k < n;k++) {
        printf("\n[%d] ", k);

        for (j=0; j< n - k; j++) {
            printf("%d, ", j);

            if (vetor[j] > vetor[j+1]) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

}
