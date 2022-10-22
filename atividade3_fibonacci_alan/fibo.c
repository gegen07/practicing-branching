#include <stdio.h>
int fibo(int n){
    if(n<3) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    
    int n, r;
    scanf("%d", &n);

    printf("Esses eh o  %dº termos da sequencia de fibonacci : %d", n, fibo(n));
    return 0;
}