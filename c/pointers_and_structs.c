#include <stdio.h>
#include <stdlib.h>

struct Person {
  char *nombre;
  int edad;
  float altura;
};

void new_person(char *name, int age, float size) {
  struct Person *person1;
  = (struct Person *)malloc(sizeof(struct Person));
  person1->nombre = name;
  person1->edad = age;
  person1->altura = size;

  printf("nombre: %s \n", name);
  printf("edad: %d \n", age);
  printf("altura: %f\n", size);

  printf("Todo ah salido con exito \n");
}

int main() {
  char nombre[] = "";
  int edad = 0;
  float altura = 0.0;
  printf("A continucion escriba los datos de su usuario: \n");

  printf("Nombre: ");
  scanf("%s", &nombre);
  printf("Edad: ");
  scanf("%d", &edad);
  printf("Altura: ");
  scanf("%f", &altura);

  printf("\n");

  new_person(nombre, edad, altura);

  return 0;
}
