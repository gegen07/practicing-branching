#include <stdio.h>
void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        printf("\n[%d] ", k);

        for (j = 0; j < n - 1; j++) {
            printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
void somaCumulativa(int vetor[],int n){
    int i;
    int array2[n];

    for (i = 0; i < n; i++){
        if(i == 0){
            array2[0] = vetor[0];
            printf("Array2[%d] = %d\n",i,array2[i]);

        }else{
            array2[i] = array2[i-1] + vetor[i];
            printf("Array2[%d] = %d\n",i,array2[i]);
        }

    }
}

int main() {
    int n = 6;
    int array[6] = {5,6,7,8,9,10};
    //bubble_sort(array,n);
    somaCumulativa(array,n);
    return 0;
}
