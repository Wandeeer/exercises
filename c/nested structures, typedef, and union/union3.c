#include <stdio.h>

typedef struct
{
    int day, month, year;
} Date;

typedef struct
{
    char name[50];
    union
    {
        int years;
        Date birthdate;
    } info;
} Person;

void new_person(Person *p)
{
    printf("\nNombre de la persona : ");
    fgets(p->name, sizeof(p->name), stdin);
    printf("Edad: ");
    scanf("%d", &p->info.years);
};
void read_person(Person *p)
{
    printf("----------------\n");
    printf("Nombre : %s", p->name);
    printf("Edad o fecha de nacimento : %d", p->info.years);
    printf("\n-----------------\n");
};

int main(int argc, char const *argv[])
{
    Person new;
    new_person(&new);
    read_person(&new);

    // Momento donde reasingamos la fecha de nacimiento de Persona
    // Observemos como este cambia
    new.info.birthdate = (Date){29, 04, 2007};
    printf("\nEdad cambiada por fecha de nacimiento exitoso\n");
    printf("\nFecha de nacimiento : %02d, %02d, %d\n", new.info.birthdate.day, new.info.birthdate.month, new.info.birthdate.year);
    printf("\nTodo salio con exito :D");
    printf("\nPD: verificamos la edad para ver que se encuntra ahi xD : %d\n", new.info.years);
    // un comentario sobre porque muestra el dia de nacimiento en el apratado de edad, quiero creer
    // que es porque en el apartado de years esta en la misma poscision de day, por ende ocupa tiene los mismo bytes
    // dando asi como resultado que el los años se aparazcan como dias. creo :)
    return 0;
}
