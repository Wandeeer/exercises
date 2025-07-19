#include <stdio.h>

int main()
{
    char line[256];

    FILE *file = fopen("prueba.txt", "r");

    // Verificar si el archivo esta bien
    if (file == NULL)
    {
        printf("Error al leer el archivo... \n");
        return 1;
    }

    // Almacena cada linea leidad del archivo file y lo almacena en line
    while ((fgets(line, sizeof(line), file)) != NULL)
    {
        // Se imprime cada linea del archivo
        printf("%s", line);
    }

    fclose(file);

    return 0;
}