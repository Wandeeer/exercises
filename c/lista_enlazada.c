#include <stdio.h>
#include <stdlib.h>

struct Nodo {
  int value;
  struct Nodo *siguiente;
};

struct Nodo *new_node(struct Nodo *head, int number) {
  struct Nodo *new = (struct Nodo *)malloc(sizeof(struct Nodo));
  new->value = number;
  new->siguiente = NULL;

  if (head == NULL) {
    return new;
  }

  struct Nodo *actual = head;
  while (actual->siguiente != NULL) {
    actual = actual->siguiente;
  }
  actual->siguiente = new;

  return head;
}

void run_list(struct Nodo *head) {
  struct Nodo *actual = head;
  int index = 0;
  while (actual != NULL) {
    index++;
    printf("Dato de nodo: %d es : %d\n", index, actual->value);
    actual = actual->siguiente;
  }
  printf("Fin de lista \n");
}

int main() {

  int nodes_for_users = 0;
  printf("Cuantos nodos desea crear: \n");
  scanf("%d", &nodes_for_users);

  struct Nodo *head = NULL;

  for (int i = 0; i < nodes_for_users; i++) {

    int value = 0;
    printf("Ingrese el valor de su nodo %d: \n", i + 1);
    scanf("%d", &value); // Valor de nodo->value

    head = new_node(head, value);
  }
  printf("Lista enlazada con exito :v \n");
  run_list(head);
  return 0;
}
