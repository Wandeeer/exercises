#include <stdio.h>
#include <stdlib.h>

int intercambio(int *x, int *b) {
    int tmp;
    tmp = *x;
    *x = *b;
    *b = tmp;
}

int main() {
    int a = 5, b = 10;
    intercambio(&a, &b);

    return 0;
}