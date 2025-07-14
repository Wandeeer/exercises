#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    // Reocupamos el codigo anterior :v
    // EXTRA: Pedir al usuario si quiere agregar mas numeros y agrandar el arreglo

    int nums;
    int *arr_nums;

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
    }

    int option = 0;
    printf("Desea agregar mas numeros o ver los numeros ingresados: \n1: add\n2: View\n");
    scanf("%d", &option);

    if (option == 1)
    {
        int nums_extr;
        printf("Ingrese cuantos numeros extra quiere agregar: \n");
        scanf("%d", &nums_extr);
        int nums_final = nums + nums_extr;
        int nums_copy = nums;

        // Reasignar memoria en una copia temporal para no afectar al original
        // cuando redimensionas le tienes que pasar el numero final de numeros
        // creados anteriormente y los nuevos ingresados para no asignar mal
        // lo tenia mal asi estaba antes: realloc(arr_nums, nums_extr * sizeof(int))
        // de esa manera solo redimensionas al nums_extr de elementos no al a la suma total de ellos
        int *temp = (int *)realloc(arr_nums, nums_final * sizeof(int));

        if (temp == NULL)
        {
            printf("Error al reasignar memoria... \n");
            return 1;
        }

        // Si la reasignacion de memoria salio bien entonces:
        arr_nums = temp;

        while (nums < nums_final)
        {
            printf("Ingrese el valor de su numero: %d\n", nums + 1);
            scanf("%d", &arr_nums[nums]);

            nums++;
        }

        printf("\nMostrando array actualizado... \n");
        for (int j = 0; j < nums_final; j++)
        {
            printf("Numero: %d valor : %d\n", j + 1, arr_nums[j]);
        }
    }
    else if (option == 2)
    {

        printf("\nMostrando array actualizado... \n");
        for (int j = 0; j < nums; j++)
        {
            printf("Numero: %d valor : %d\n", j + 1, arr_nums[j]);
        }
    }

    // liberar memoria
    free(arr_nums);
    arr_nums = NULL;

    return 0;
}
