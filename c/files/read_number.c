#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    size_t elements_written;

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

    int *nums = malloc(size_numbers * sizeof(int));
    fseek(file, 0, SEEK_SET);
    fread(nums, sizeof(int), size_numbers, file);

    // Recorrer hacia atras
    for (int i = size_numbers - 1; i >= 0; i--)
    {
        printf("Valor de %d : %d \n", i, nums[i]);
    }

    fclose(file);
    return 0;
}