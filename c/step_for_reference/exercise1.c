#include <stdio.h>

void calculate(int a, int b, int c, int *min, int *max) {

  *min = a;
  *max = a;

  if (b < *min) {
    *min = b;
  }
  if (b > *max) {
    *max = b;
  }

  if (c < *min) {
    *min = c;
  }
  if (c > *max) {
    *max = c;
  }
  
}

int main() {
  int x = 19;
  int y = 89;
  int z = 12;

  int minimo, maximo;

  calculate(x, y, z, &minimo, &maximo);

  printf("El minimo es: %d \n", minimo);
  printf("El maximo es: %d \n", maximo);

  return 0;
}
