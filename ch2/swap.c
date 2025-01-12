#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

int main() {
    int a = 21;
    int b = 17;
    swap(&a, &b);
    printf("main: a = %d, b = %d\n", a, b);
    return EXIT_SUCCESS;
}