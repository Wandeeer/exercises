#include <stdio.h>

void sumArr(int *size, int *arr) {
  int sum = 0;
  for (int i = 0; i < *size; i++) {
    printf("%d + %d: ", sum, arr[i]);
    sum += arr[i];
    printf("%d\n\n", sum);
  }

  printf("La suma de los numeros de su lista es: %d\n", sum);
}

int main() {
  int size_arr = 5;
  int arr[5] = {2, 3, 5, 8, 9};

  sumArr(&size_arr, arr);

  return 0;
}
