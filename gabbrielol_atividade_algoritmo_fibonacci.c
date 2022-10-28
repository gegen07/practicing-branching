#include <stdio.h>

int main() {
    int i;
    int a0, a1, a2;
    a0 = 0; a1 = 1;
    printf("%d %d ", a0, a1);
    for (i = 0; i < 20; i++) {
        a2 = a0 + a1;
        a0 = a1;
        a1 = a2;
        printf("%d ", a2);
    }
    return 0;
}