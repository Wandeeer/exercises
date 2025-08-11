#include <stdio.h>
#include <string.h>
struct Product
{
    int ID;
    char name[100];
};

void create_new_product(FILE *f, char *db_name, char *name_item, int id_item)
{

    struct Product new;
    new.ID = id_item;
    // Copiamos la cadena de caracteres
    strncpy(new.name, name_item, sizeof(new.name) - 1);
    // Nos aseguramos de terminacion nula, para evitar un desbordamiento
    new.name[sizeof(new.name) - 1] = '\0';

    // Con esta apertura podemos escribir al final del archivo si ya hay datos previos
    // en dado caso de no almacenar nada, crea uno nuevo
    f = fopen(db_name, "ab");

    if (f == NULL)
    {
        printf("Error al abrir el archivo");
        fclose(f);
        return;
    }

    size_t written = fwrite(&new, sizeof(struct Product), 1, f);

    if (written != 1)
    {
        perror("Error al escribir en el archivo");
    }

    fclose(f);
}
void read_item(FILE *f, char *db_name)
{

    f = fopen(db_name, "rb");
    if (f == NULL)
    {
        printf("Error al leer el archivo saliendo...\n");
        return;
    }

    fseek(f, 0, SEEK_END);
    long size_file = ftell(f);
    fclose(f);

    if (size_file > 0)
    {
        f = fopen(db_name, "rb");
        struct Product group_elements[size_file];

        size_t read_bytes = fread(group_elements, sizeof(struct Product), size_file, f);

        printf("\nLista de Productos: \n");
        for (int i = 0; i < read_bytes; i++)
        {
            printf("\nID : %d\nNombre : %s\n", group_elements[i].ID, group_elements[i].name);
        }
        fclose(f);
    }
    else
    {
        printf("No hay ningun producto... \n");
        fclose(f);
        return;
    }
}

int main()
{
    FILE *file;
    char name_archive[] = "files/products.bin";

    int exit = 0;
    int opt;

    char name_product[100];
    int ID = 0;

    while (exit == 0)
    {
        printf("\n---------------Menu de productos--------------\n\n");
        printf("1 : Agregar\n2 : Ver\n3 : Salir\n");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
        {
            printf("\nIngrese a continuacion el nombre de su producto: ");
            getchar();
            fgets(name_product, sizeof(name_product), stdin);
            if (ID >= 0)
            {
                ID += 1;
            }
            create_new_product(file, name_archive, name_product, ID);
            break;
        }
        case 2:
            read_item(file, name_archive);
            break;

        case 3:
            printf("\nSaliendo...\n");
            exit = 1;
            break;

        default:
            printf("Valor incorrecto");
            exit = 1;
        }
    }

    return 0;
}