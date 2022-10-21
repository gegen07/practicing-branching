#include <stdio.h>
#include <stdlib.h>

int main(){
    int v1[5] = {1, 2, 3, 4, 5};
    int v2[5];
    int i, soma=0;

    for (i=0; i<5;i++){
        soma += v1[1];
        v2[i] = soma;
    }
    return 0;
}
