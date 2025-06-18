#include <stdio.h>
#include <string.h>

struct Person {
  char name[50];
  int age;
  float stature;
};
void scroll_list(struct Person *head, int size) {
  for (int i = 0; i < size; i++) {
    printf("Persona: %d\n\n", i + 1);
    printf("Nombre: %s \n", head[i].name);
    printf("Edad: %d \n", head[i].age);
    printf("Altura: %f \n\n", head[i].stature);
  }
}
int main() {
  // Variables de persona
  char nombre[50];
  int edad;
  float estaura;
  int personas = 5; // Personas que se van a crear

  struct Person group_person[personas]; // Lista de Personas

  for (int i = 0; i < personas; i++) {
    printf("Ingrese su nombre, edad y estatura a continuacion: \n\n");
    scanf("%s", &nombre);
    scanf("%d", &edad);
    scanf("%f", &estaura);
    struct Person present;
    strcpy(present.name, nombre);
    // present.name = nombre;
    present.age = edad;
    present.stature = estaura;

    group_person[i] = present;

    printf("Persona %d agregada correcatamete \n\n", i + 1);
  }

  scroll_list(group_person, personas);

  return 0;
}
