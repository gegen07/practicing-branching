#include <stdio.h>
#include <stdlib.h>

void intercala (int p, int q, int r, int v[]) 
{
   int *w;                                 
   w = malloc ((r-p) * sizeof (int));      
   int i = p, j = q;                      
   int k = 0;                              

   while (i < q && j < r) {                
      if (v[i] <= v[j])  w[k++] = v[i++];  
      else  w[k++] = v[j++];               
   }                                       
   while (i < q)  w[k++] = v[i++];         
   while (j < r)  w[k++] = v[j++];         
   for (i = p; i < r; ++i)  v[i] = w[i-p]; 
   free (w);  
}

void mergesort (int p, int r, int v[])
{
   if (p < r-1) {               
      int q = (p + r)/2;       
      mergesort (p, q, v);       
      mergesort (q, r, v);        
      intercala (p, q, r, v);     
   }
}

int main(){

	int i, v[10];
	
	printf("Digite 10 numeros:\n");
	
	for(i = 0; i < 10; i++)
		scanf("%d", &v[i]);
		
	mergesort(0, 9, v);
	
	for(i = 0; i < 10; i++)
		printf("%d\n", v[i]);	
	
	return 0;
}
