#include <stdio.h>
#include <stdlib.h>

// Funcion para recibir matriz dinamaica
void print_matrix(int **matrix, int rows, int cols) {

    for (int a = 0; a < rows; a++)
    {
        matrix[a] = malloc(cols * sizeof(int));
    }
    
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = 0;
            printf("%2d", matrix[i][j]);
        }
        printf("\n");
    }
    
}

int main() {

    int a = 20;
    int b = 20;
    
    int **matrix = (int**)malloc(b * sizeof(int*));
    print_matrix(matrix, a, b);

    return 0;
}