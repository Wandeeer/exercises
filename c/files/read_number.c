#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    size_t elements_written;
    size_t bytes_read;
    char buffer[5];

    int numbers[] = {2, 9, 4, 3, 2, 0};
    int size_numbers = sizeof(numbers) / sizeof(numbers[0]);

    file = fopen("files/number.bin", "wb");
    if (file == NULL)
    {
        printf("Error al abrir el archivo... \n");
        return 1;
    }

    elements_written = fwrite(numbers, sizeof(int), size_numbers, file);
    fclose(file);

    file = fopen("files/number.bin", "rb");

    if (file == NULL)
    {
        printf("Error al abrir para leer...\n");
        return 1;
    }

    int num;
    int index = 1;
    fseek(file, 0, SEEK_END);
    while (fread(&num, sizeof(int), 1, file))
    {
        printf("Pocision %d valor: %d\n", size_numbers - index, num);
        index++;
    }

    fclose(file);
    return 0;
}