#include <stdio.h>
   2 
   3 int fib(int n)                             
   4 {                                          
   5   int i, fib1 = 1, fib2 = 1, soma;         
   6   for (i = 3; i <= n; i = i + 1)           
   7   {                                        
   8     soma = fib1 + fib2;                    
   9     fib1 = fib2;                           
  10     fib2 = soma;                           
  11   }                                        
  12   return fib2;                             
  13 }                                          
  14 
  15 int main(void)
  16 {
  17   int n;
  18   scanf("%d", &n);
  19   printf("%d\n", fib(n));
  20   return 0;
  21 }