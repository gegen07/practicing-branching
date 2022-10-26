#include <stdio.h>

int main(){
    int numeros[6] = {0,1,2,3,4,5}, resultado = 0;

    for(int i =0; i < 6;i++){
        resultado += numeros[i];
    }

    printf("%d\n",resultado);
}