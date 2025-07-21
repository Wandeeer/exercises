#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int age;
    float prom;
};

int main()
{
    FILE *file;
    char buffer[50];
    size_t bytes_leidos;
    size_t elements_written;

    char nombre[50];
    int edad;
    float promedio;

    int stds = 3;
    // Array de 3 estudiates
    struct Student group_students[stds];

    for (int i = 0; i < stds; i++)
    {
        printf("Ingrese su nombre, edad y promedio a continuacion: \n\n");
        scanf("%s", &nombre);
        scanf("%d", &edad);
        scanf("%f", &promedio);
        struct Student new;
        strcpy(new.name, nombre);
        // new.name = nombre;
        new.age = edad;
        new.prom = promedio;
        group_students[i] = new;

        printf("Persona %d agregada correcatamete \n\n", i + 1);
    }

    // Abrir archivo
    file = fopen("data.bin", "wb");
    if (file == NULL)
    {
        printf("Error al abrir archivo...\n");
        return 1;
    }
    // Escribir datos en un archivo binario
    elements_written = fwrite(group_students, sizeof(struct Student), stds, file);
    fclose(file);

    if (elements_written != stds)
    {
        perror("Error al escribir en el archivo");
    }

    // Leer datos del archivo
    struct Student read_stds[stds];
    file = fopen("data.bin", "rb");
    if (file == NULL)
    {
        printf("Erro al leer el archivo... \n");
        return 1;
    }

    bytes_leidos = fread(read_stds, sizeof(struct Student), stds, file);
    fclose(file);

    // Comprobacion
    if (bytes_leidos < stds)
    {
        if (feof(file))
        {
            printf("Fin del archivo alcanzado \n");
        }
        else if (ferror(file))
        {
            printf("Error al leer su archivo \n");
        }
    }

    printf("\nEstudiantes leidos del archivo\n");
    for (int i = 0; i < bytes_leidos; i++)
    {
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n",
               read_stds[i].name, read_stds[i].age, read_stds[i].prom);
    }

    return 0;
}
