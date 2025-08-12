#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Direccion
{
    char street[50];
    char city[30];
    int codepostal;
};

struct Cliente
{
    char name[50];
    char tel[15];
    struct Direccion address;
};

void new_client(struct Cliente *c)
{
    // Momento donde pedimos datos al usuario
    // Dato: es la primera vez que no voy a usar variables temporales aver que tal nos va

    printf("\nIngrese a continuacion los siguientes datos:\n");
    printf("\n----- Datos Personales ----\n");
    printf("\nNombre: ");
    fgets(c->name, sizeof(c->name), stdin);
    printf("\nNumero de telefono: ");
    fgets(c->tel, sizeof(c->tel), stdin);
    printf("\n---------------------------\n");

    printf("\n----- Direccion -----\n");
    printf("\nCalle: ");
    fgets(c->address.street, sizeof(c->address.street), stdin);
    printf("\nCiudad: ");
    fgets(c->address.city, sizeof(c->address.city), stdin);
    printf("\nCodigo postal: ");
    scanf("%d", &c->address.codepostal);
    printf("\n---------------------\n");
}

int main()
{

    struct Cliente new;
    new_client(&new);

    // Quisiera poder arreglar la manera en que se muestra pero tengo que eliminar los
    // saltos de linea que deja, ya que altera la manera en que se muestra
    // y pude causar desbordamiento. Mas tarde lo arreglo aqui esta
    // la manera de hacerlo:
    //
    // size_t len = strlen(new.name);
    // if (new.name > 0 && new.name[len - 1] == '\n') { new.name[len - 1] = '\0'; }
    //
    // De esa manera elimnamos el salto de linea.
    // Cabe decir que esto se debe aplicar para cada char lo cual son muchos
    // Vere la manera de hacerlo junto y eficiente para no tener muchas lineas de codigo.

    printf("\n----- Datos del cliente -----\n");
    printf("Nombre : %s\nTelefono : %s\n", new.name, new.tel);
    printf("Calle : %s\nCiudad : %s\nCodigo Postal : %d\n", new.address.street, new.address.city, new.address.codepostal);
    printf("-----------------------------\n");

    return 0;
}