#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Con typedef podemos ahorrarnos una line de codigo
// para ser mas exactos, no ahorramos el declarar el struct antes de cada
// nombre de un struct ya declarado previamente esto lo ase mas legible. O eso creo xD
// Yo solo lo ago para ahorrarme el escribir de mas.

typedef struct
{
    char street[50];
    char city[30];
    int codepostal;
} Direccion;

typedef struct
{
    char name[50];
    char tel[15];
    Direccion address;
} Cliente;

void new_client(Cliente *c)
{
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

    Cliente new;
    new_client(&new);
    printf("\n----- Datos del cliente -----\n");
    printf("Nombre : %s\nTelefono : %s\n", new.name, new.tel);
    printf("Calle : %s\nCiudad : %s\nCodigo Postal : %d\n", new.address.street, new.address.city, new.address.codepostal);
    printf("-----------------------------\n");

    return 0;
}