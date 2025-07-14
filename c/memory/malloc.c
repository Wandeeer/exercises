#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int nums;
    int *arr_nums;
    int prom;

    printf("\nCuantos numeros va a ocupar: \n");
    scanf("%d", &nums);

    // Reservar memoria dinamica en el heap con malloc
    arr_nums = (int *)malloc(nums * sizeof(int));

    // verificar simpre si el array esta vacio
    if (arr_nums == NULL)
    {
        /* code */
        printf("\nError al reservar memoria. \n");
        return 1;
    }

    // Pedimos al usuario rellenar sus numeros
    for (int i = 0; i < nums; i++)
    {
        printf("Ingrese el valor de su numero %d:\n", i + 1);
        scanf("%d", &arr_nums[i]);
        prom = prom + arr_nums[i];
    }

    // Mostrar numeros ingresados por el usuario
    printf("\nNumeros ingresados: \n");
    for (int j = 0; j < nums; j++)
    {
        printf("Numero %d : valor: %d\n", j + 1, arr_nums[j]);
    }

    // Calcular el promedio
    printf("\nValor de numero sumados: %d\n", prom);
    printf("Promedio: %d", prom / nums);

    // liberamamos memoria
    free(arr_nums);
    arr_nums = NULL;

    return 0;
}
