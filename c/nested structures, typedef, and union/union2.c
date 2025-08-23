#include <stdio.h>

union Identification
{
    int DNI;
    char passport[20];
};

struct Person
{
    char name[50];
    union Identification id;
    int ident_id;
};

void new_person(struct Person *p)
{
    printf("\nIngrese el nombre de la persona: ");
    fgets(p->name, sizeof(p->name), stdin);

    printf("Ingrese su DNI o su pasaporte (presione 1 para DNI, 2 para pasaporte en caso de no tener uno) : ");
    scanf("%d", &p->ident_id);
    if (p->ident_id == 1)
    {
        printf("\nDNI: ");
        scanf("%d", &p->id.DNI);
    }
    else if (p->ident_id == 2)
    {
        printf("\nPasaporte: ");
        getchar();
        fgets(p->id.passport, sizeof(p->id.passport), stdin);
    }
    else
    {
        printf("Valor incorrecto");
        return;
    }
}

void read_date(struct Person *p)
{
    printf("\n\n-----------------------");
    printf("\nDatos de %s\n", p->name);
    printf("Nombre : %s", p->name);
    if (p->ident_id == 1)
    {
        printf("DNI : %d", p->id.DNI);
    }
    else if (p->ident_id == 2)
    {
        printf("Pasaporte : %s", p->id.passport);
    }
    else
    {
        printf("Valor incorrecto o corrupto");
    }
    printf("\n----------------------\n");
}

int main()
{
    struct Person new;
    new_person(&new);
    read_date(&new);
    return 0;
}