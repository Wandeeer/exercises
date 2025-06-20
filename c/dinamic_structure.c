#include <stdio.h>
#include <stdlib.h>

struct Persona {
  char *nombre;
  int edad;
  float altura;
};

int main() {
  // Crear persona
  struct Persona* persona1 = (struct Persona*)malloc(sizeof(struct Persona));
  
  // Variables de Persona
  char name[50];
  int age;
  float size;
 
  // Escanear los datos de la persona y almacnarlos en variables
  scanf("%s", &name);
  scanf("%d", &age);
  scanf("%f", &size);

  // Asinganar los datos a persona 
  persona1->nombre = name;
  persona1->edad = age;
  persona1->altura = size;

  printf("Persona 1: \n");
  printf("Nombre: %s \n", persona1->nombre);
  printf("Edad: %d \n", persona1->edad);
  printf("Tamaño: %f \n\n", persona1->altura);

  free(persona1);

  printf("Memoria liberada correctamente \n");

  return 0;
}
