#include <stdio.h>
#include <stdlib.h>

struct Fecha {
  int day;
  int month;
  int year;
};
struct Persona {
  char *name;
  int age;
  struct Fecha* birthdate;
};

int main() {
  int day = 12;
  int month = 04;
  int year = 2007;

  char name[10] = "Xavier";
  int age = 18;

  struct Persona* persona1 = (struct Persona*)malloc(sizeof(struct Persona)); // Solo asingna memoria suficiente para nombre, edad y el puntero cumpleaños pero no para lo que apunta cumpleaños solo un puntero en si
                                                                              
  // struct Fecha* birthdate_one = (struct Fecha*)malloc(sizeof(struct Fecha));

  persona1->birthdate = (struct Fecha*)malloc(sizeof(struct Fecha)); // Asignar memoria para el birthdate

  persona1->name = name;
  persona1->age = age;
   
  persona1->birthdate->day = day;
  persona1->birthdate->month = month;
  persona1->birthdate->year = year;

  printf("Datos de Persona 1: \n");
  printf("Nombre: %s \n", persona1->name);
  printf("Edad: %d \n", persona1->age);
  printf("Cumpleannos: %d/%d/%d", persona1->birthdate->day, persona1->birthdate->month, persona1->birthdate->year);

  // liberar memoraia, primero el interior de persona luego ya persona completa
  free(persona1->birthdate);
  free(persona1);
  //free(birthdate_one);

  return 0;
}
