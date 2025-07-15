#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Asientos Totales
    int seating = 10;
    int seating_available = 0;
    // Reservar espacio en memoria para seating totales y inicializarlos en 0
    int *ptr = (int *)calloc(seating, sizeof(int));

    // Asientos reservados por el ususario
    int reserved = 0;
    printf("Cuantos asientos desea reservar: \n");
    scanf("%d", &reserved);

    seating_available = seating - reserved;

    if (ptr == NULL)
    {
        printf("Error al asignar memoria... \n");
        return 1;
    }

    if (reserved < seating)
    {
        for (int i = 0; i < reserved; i++)
        {
            ptr[i] = 1;
        }
    }
    else
    {
        printf("\nLas reservas superan los lugares disponibles, reserve menos lugares \n");
        printf("Lugares disponibles: %d \n", seating);
        return 1;
    }

    int option;
    printf("\nOpciones: \n\n1: Agregar mas asientos\n2: Ver reservados\n3: Reservar mas lugares\n");
    scanf("%d", &option);

    switch (option)
    {
    // Si se elige la opcion 1 se formatearan todos los lugares reservados previamente
    // Mañana lo arreglo xD
    case 1:
    {
        int extra;
        printf("Cuantos mas desea ampliar: \n");
        scanf("%d", &extra);
        int extra_seating = seating + extra;
        seating = extra_seating;

        // Reasingnamos memoria
        int *tmp = (int *)realloc(ptr, extra_seating * sizeof(int));
        tmp = (int *)calloc(extra_seating, sizeof(int));

        if (tmp == NULL)
        {
            printf("Error al reasignar memoria");
            return 1;
        }

        ptr = tmp;

        printf("Asientos nuevos agregados \n\n");
        for (int i = 0; i < seating; i++)
        {
            printf("Asiento %d ocupado : %d\n", i + 1, ptr[i]);
        }

        break;
    }
    case 2:
        for (int i = 0; i < seating; i++)
        {
            printf("Asiento %d ocupado : %d\n", i + 1, ptr[i]);
        }
        break;
    case 3:
    {
        int extra_reserved;
        printf("Asientos disponibles: %d\n", seating_available);
        printf("Cuantos lugares extra quieres reservar:\n");
        scanf("%d", &extra_reserved);
        int extra_reserved_final = reserved + extra_reserved;

        if (extra_reserved < seating_available)
        {
            while (reserved < extra_reserved_final)
            {
                ptr[reserved] = 1;
                reserved++;
            }

            printf("\nLugares asingados correctamente\n");
        }
        else
        {
            printf("Los asientos que quiere reservar superan los asientos restantes, intentelo de nuevo \n");
            break;
        }
        for (int i = 0; i < seating; i++)
        {
            printf("Asiento %d ocupado : %d\n", i + 1, ptr[i]);
        }

        break;
    }
    default:
        printf("Opcion incorrecta... Saliendo... \n");
        break;
    }

    free(ptr);
    ptr = NULL;

    return 0;
}
