#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
  int data[MAX];
  int top;
} Stack;

// Inizializar la pila
void init(Stack* p) {
  p->top = -1;
}

// Verificar si no esta vacio
int is_empty(Stack* p) {
  return p->top == - 1;
}

// Verificar si esta lleno
int is_full(Stack* p) {
  return p->top == MAX - 1;
}

// Insertar (push)
void push(Stack* p, int value) {
  // Revisar si la pila no esta llena
  if(!is_full(p)) {
    // Incrementa top y coloca ahi el valor
    p->data[++(p->top)] = value;
  } else {
    printf("Pila llena \n");
  }
}

// Quitar elemento (pop)
int pop(Stack* p) {
  // Revisar si la pila no esta vacia
  if(!is_empty(p)) {
    return p->data[(p->top)--];
  } else {
    printf("Pila vacia\n");
    return -1;
  }
}

// Muestra el valor que esta en la cima sin sacarlo
int peek(Stack* p) {
  if(!is_empty(p)) {
    return p->data[p->top];
  } else {
    printf("Pila vacia \n");
    return -1;
  }
}

int main() {
  Stack* head = (Stack*)malloc(sizeof(Stack));
  init(head);

  for(int i = 1; i <= MAX; i++) {
    push(head, i);
    printf("Plato: %d\n", peek(head));
  }

  free(head);
  return 0;
}
