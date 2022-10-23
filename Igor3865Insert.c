#include <stdio.h>
#include <stdlib.h>
#define MAX 10
 
void insertion_sort(int *a);

int main(int argc, char** argv)
{
 int i, vet[MAX];
 for(i = 0; i < MAX; i++)
 {
  printf("Digite um valor: ");
  scanf("%d", &vet[i]);
 }
 
 insertion_sort(vet);
 printf("\n\nValores ordenados\n");
 for(i = 0; i < MAX; i++)
 {
  printf("%d\n", vet[i]);
 }
 system("pause");
 return 0;
}
void insertion_sort(int *a)
{
 int i, j, tmp;
  
 for(i = 1; i < MAX; i++)
 {
  tmp = a[i];
  for(j = i-1; j >= 0 && tmp < a[j]; j--)
  {
   a[j+1] = a[j];
  }
  a[j+1] = tmp;
 }
}
