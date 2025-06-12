#include <stdio.h>

int main() {
  int list[] = {2, 4, 5, 13, 21, 2};
  int size = sizeof(list) / sizeof(list[0]);
  int sum = 0;
  for (int i = 0; i < size; i++) {
    printf("%d + %d: ", sum, list[i]);
    sum += list[i];
    printf("%d\n\n", sum);
  }

  printf("La suma de los numeros de su lista es: %d\n", sum);
  return 0;
}
