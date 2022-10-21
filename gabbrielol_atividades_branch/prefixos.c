#include <stdio.h>

int main() {
    int i;
    int array[5] = {5, 10, 15, 20, 25};
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    for (i = 0; i < 5; i++) {
        array[i + 1] = array[i + 1] + array[i];
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
}