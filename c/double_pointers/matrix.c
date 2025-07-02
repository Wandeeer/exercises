#include <stdio.h>
#include <stdlib.h>

int main() {

    int row = 4, col = 8;
    
    // Reserva un bloque de memoria para un array de punteros
    int **matrix = (int **)malloc(col * sizeof(int*));

    for (int i = 0; i < row; i++)
    {
      matrix[i] = malloc(col * sizeof(int));
        
    }
   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = 1;
            printf("%2d", matrix[i][j]);
        }
        printf("\n");
    } 

    for (int i = 0; i < row; i++)
    {
        free(matrix[i]);
    }
   
    free(matrix);

    return 0;
}