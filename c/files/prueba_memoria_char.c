#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *buffer;

    printf("Ingresa una cadena: ");
    fgets(buffer, sizeof(buffer), stdin);

    char *text = (char *)malloc(sizeof(char));
    if(text == NULL) {
        printf("Error al asignar memoria");
        return 1;
    }

    printf("Tamano de buffer: %zu\n", sizeof(text));
    printf("Longitud de buffer: %zu\n", strlen(text));
    
    
    return 0;
}
