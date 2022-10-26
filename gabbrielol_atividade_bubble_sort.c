#include <stdio.h>

int main() {
    int bubble, i, temp;
    int array[5] = {25, 5, 10, 75, 25};
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (bubble = 1; bubble < 5; bubble++) {
        for (i = 0; i < 4; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}