#include <stdio.h>

struct Product {
    int ID;
    char *name;
}

void create_new_product(FILE f, char *name_item, int id_item) {

}

void read_item(FILE *f, char *db_name) {

    size_t elements_written;

    f = fopen(db_name, "rb");
    if(f == NULL) {
        printf("Error al leer el archivo saliendo...\n"); 
        return;
    }
 
    fseek(f, 0, SEEK_END);
    long size_file = ftell(f);

    if (size_file > 0) {

    struct Product group_elements[size_file];

    elements_written = fread(group_elements, sizeof(struct Product), size_file, f);

    printf("\nLista de Productos: \n");
    for(int i = 0; i < elements_written; i++) { 
        printf("\nID : %d\nNombre : %s\n", group_elements[i].ID, group_elements[i].name);
    }
    } else {
        printf("No hay ningun producto... \n");
        fclose(f);
        return;
        
    }
    fclose(f);
}

int main()
{
    FILE *file; 
    
    return 0;
}