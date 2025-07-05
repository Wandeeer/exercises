#include <stdio.h>

// funcion simple
void saludar() {
    printf("Hola desde la funcion saludar\n");
}

// Con argumentos
int suma(int x, int y) {
    return x + y;
}

int main() {

    // Puntero a funcion sin retorno y sin parametros
    void (*ptr_saludar)();
    // Puntero a funcion con parametros que tomo 2 INT y devuelve 1 INT
    int(*ptr_suma)(int,int);

    // Asignamos la direccion de saludar al puntero
    ptr_saludar = saludar;
    // Asignar con parametros (Lo mismo que sin)
    ptr_suma = suma;
    // Llamamos a la funcion
    ptr_saludar();
    // Llamammos y asignamos parametros

    int result = ptr_suma(10, 30);
    printf("Resultado: %d\n", result);
    
    return 0;
}