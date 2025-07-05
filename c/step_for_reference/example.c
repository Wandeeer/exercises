#include <stdio.h>

// Paso por valor
void increment(int x) {
   x = x + 1; 
}

// Paso por referencia 
void increment_p(int *x) {
    *x = *x + 1;
}

int main() {

    int a = 5;

    // Valor
    // El valor de a no cambia ya que solo le proporcionamos una copia de A a la funcion increment()
    // Y este no afecta a la variable original solo modifico su copia asignada
    increment(a);
    printf("a = %d\n\n", a);

    // Referencia
    // Al pasarle la direccion de memoria de la variable A podemos ahora si modificarlo mediante un puntero
    // Ya que este si afecta al valor original al modificarlo directamente.
    increment_p(&a);
    printf("a = %d\n", a);

    return 0;
}