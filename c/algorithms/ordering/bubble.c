#include <stdio.h>

void bubble_sort(int *arr, int *nums)
{
    for (int i = 0; i < *nums - 1; i++)
    {
        // Aqui restamos lo numeros iterados porque
        // esos ya estan ordenados asique no hace falta volver a comparar esas posciones finales
        // por eso se omiten o restan.
        // Se diria algo como : "tamaño del array descartando numeros ya ordenados menos el numero a comparar"
        // este -1 es para que podamos trabajarlo mas adelante ya que se hace un j+1,
        // y este es el que ayuda a eso al momento de mirar hacia delante, si no se pusiera pudieramos causar problemas.

        for (int j = 0; j < *nums - i - 1; j++)
        {
            // Compara con el siguiente numero para ver si es mas grande
            if (arr[j] > arr[j + 1])
            {
                // Hacen el cambio de poscision
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {6, 1, 2, 8, 10, 5, 9, 3};
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    printf("Contenido antes del ordenamiento: \n");
    for (int i = 0; i < size_arr; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort(arr, &size_arr);

    printf("\nDespues del ordenamiento: \n");
    for (int i = 0; i < size_arr; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}