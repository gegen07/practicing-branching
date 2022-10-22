#include <stdio.h>

int mais_quatro(int x){
    int y = x + 4;
    return y;
}


int main(){
    int x;
    scanf("%d",&x);
    printf("%d",mais_quatro(x));
}