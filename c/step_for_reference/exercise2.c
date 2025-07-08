#include <stdio.h>
#include <stdlib.h>

int increment_arr(int *arr, int *size_a) {

  for(int i = 0; i < *size_a; i++) {
    arr[i] = arr[i] * 2;
  }
  return *arr;
}

int main() {
  int arr[5] = {2,4,5,6,1};
  int tam_arr = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < tam_arr; i++) {
    printf("Valor antes de la mutacion: %d : %d \n", i+1, arr[i]);
  }

  printf("\nIncrementando su valor por 2 \n\n");

  increment_arr(arr, &tam_arr);
  for (int i = 0; i < tam_arr; i++) {
    printf("Valor despues de la mutacion: %d : %d \n", i+1, arr[i]);
  }

  return 0;
}
