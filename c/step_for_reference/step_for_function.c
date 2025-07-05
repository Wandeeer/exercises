#include <stdio.h>

// Pasamos una funcion como parametro
int operacion(int a, int b, int(*op)(int, int)) {
    return op(a, b);
}

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int main() {

    int result_suma = operacion(8, 2, suma);
    int result_resta = operacion(8, 2, resta);

    printf("Suma: %d\n", result_suma);
    printf("Resta: %d\n", result_resta);

    return 0;
}