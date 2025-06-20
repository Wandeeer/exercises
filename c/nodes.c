#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Crea una estructura Nodo con un int y un puntero al siguiente nodo.
 *
 * Funciones:
 *
 * Agregar nodo al final.
 *
 * Mostrar la lista.
 *
 * Eliminar todos los nodos (liberando memoria).
 *
 * ------------------ (Mejora) -------------------------
 *
 * Insertar en orden ascendente
 *
 * Modifica el ejercicio anterior para que cada 
 * nuevo nodo se inserte en su posición correcta en orden ascendente.
 *
 * */

struct Nodo {
  int value;
  struct Nodo* next;
};

// Funcion para agregar nodo al final
void add_node(struct Nodo* head, int value) {
  struct Nodo* head_copy = head;
  struct Nodo* actual = (struct Nodo*)malloc(sizeof(struct Nodo));

  head_copy->value = head->value;
  head->next = actual;

  actual->value = value;
  actual->next = NULL; 

}

// Funcion para leer los datos de la lista
void show_list(struct Nodo* head) {
 struct Nodo* actual = head;
 int index = 0;
 while(actual != NULL) {
  index++;
  printf("Nodo: %d \n\n", index);
  printf("Contenido: %d \n\n", actual->value);

  actual = actual->next;
 }
 printf("\nFin de lista.\n\n");
}

// Funcion para liberar memoria de la lista
void free_list(struct Nodo* head) {
  struct Nodo* actual = head;
  while(actual != NULL) {
    struct Nodo *temp = actual;
    actual = actual->next;
    // Liberar memoria de cada nodo
    free(temp);
  }
  printf("\nMemoria liberada correctamente \n\n");
}

int main() {
  int first_value = 5;
  int value_node; 
  struct Nodo* head = (struct Nodo*)malloc(sizeof(struct Nodo));
  head->value = first_value;
  head->next = NULL;
 
  printf("Ingrese el valor de su nuevo nodo: ");
  scanf("%d", &value_node);

  add_node(head, value_node);
  show_list(head);
  free_list(head);

  printf("Todo ah salido con exito");

  return 0;
}
