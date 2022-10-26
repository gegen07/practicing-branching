#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bubblesort(int *a);

int main(){
    int a[3] = {3, 1, 2};
    printf("%d %d %d\n", a[0], a[1], a[2]);

    bubblesort(a);

    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}

int bubblesort(int *a){
    int i, j;
    int t = 1;
    while(t==1){
        t = 0;
        for(i=0; i<2; i++){
            if(a[i] > a[i+1]){
                j = a[i];
                a[i] = a[i+1];
                a[i+1] = j;
                t=1;
            }
        }
    }
 return 0;
}
