#include <stdio.h>

// Funcion invalida pero se queda por si acaso xD
// (Solo funciona si lo llamas para operaciones independientes)
int operation(int a, int b, int (*ptr_op)(int, int))
{
  return ptr_op(a, b);
}

int sum(int x, int y)
{
  return x + y;
}
int res(int x, int y)
{
  return x - y;
}
int div(int x, int y)
{
  return x * y;
}
int mult(int x, int y)
{
  return y != 0 ? x / y : 0;
}

int main()
{
  // Array de funciones
  int (*ops[4])(int, int);
  ops[0] = sum;
  ops[1] = res;
  ops[2] = div;
  ops[3] = mult;

  int a = 5;
  int b = 9;
  int value = 0;

  printf("\nQue desea hacer:\n \n0: suma\n1: resta\n2 multiplicion\n3: division\n");
  scanf("%d", &value);

  // Aqui puedes escalar el programa pidendole al usuario que digite los numeros para operar

  if (value >= 0 && value <= 3)
  {
    printf("\nResultado: %d\n", ops[value](a, b));
  }
  else
  {
    printf("\nOpcion invalida...\n");
  }

  return 0;
}