#include <stdio.h>

int mayor(int a, int b) { return (a > b) ? a : b; }
int menor(int a, int b) { return (a < b) ? a : b; }

void ordenamiento(int a, int b, int *arr, int (*max)(int, int), int (*min)(int, int))
{
    if (arr == NULL)
        return;
    arr[0] = min(a, b);
    arr[1] = max(a, b);
}

int main()
{
    int a = 19;
    int b = 9;

    int arr[2];
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    ordenamiento(a, b, arr, mayor, menor);
    for (int i = 0; i < size_arr; i++)
    {
        printf("Valor del array: %d : %d\n", i, arr[i]);
    }

    return 0;
}