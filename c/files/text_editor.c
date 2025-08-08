#include <stdio.h>
#include <string.h>

void read_notebook(FILE *f, char *name)
{
    f = fopen(name, "r");
    if (f == NULL)
    {
        printf("Error al tratar de leer el archivo...");
        return;
    }
    char text[50];
    while (fgets(text, sizeof(text), f) != NULL)
    {
        printf("%s", text);
    }

    fclose(f);
}

void edit_text(FILE *f, char *name)
{
    char text[100];
    f = fopen(name, "r");
    fseek(f, 0, SEEK_END);
    long size_file = ftell(f);
    fclose(f);
    if (size_file > 0)
    {
        read_notebook(f, name);
        printf("\n");
        f = fopen(name, "a");
        getchar();
        fgets(text, sizeof(text), stdin);
        fprintf(f, "%s", text);
        fclose(f);
    }
}

int main()
{
    FILE *file;

    char text[50];
    int opt = 0;
    int exit = 0;

    while (exit == 0)
    {

        printf("\nQue desea hacer: \n\n1:Abrir y escribir en archivo nuevo\n2:Abrir y editar\n3:Leer un archivo\n\n");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
        {

            char file_name[] = "";
            // Se le pide al usuario que ingrese un nombre para el nuevo archivo
            printf("Escriba el nombre de su archivo: ");
            scanf("%s", &file_name);

            printf("Creando nuevo archivo \n\n");
            file = fopen(file_name, "w");
            if (file == NULL)
            {
                printf("Algo salio mal");
                return 1;
            }

            printf("Puede proceder a escribir: \n");
            getchar();
            fgets(text, sizeof(text), stdin);
            fprintf(file, "%s", text);
            fclose(file);
            break;
        }

        case 2:
        {
            char name_file_edit[] = "";
            printf("Que archivo desea editar: ");
            scanf("%s", &name_file_edit);
            edit_text(file, name_file_edit);
            break;
        }
        case 3:
        {
            char name_file_read[] = "";
            printf("Que archivo desea leer: ");
            scanf("%s", &name_file_read);
            read_notebook(file, name_file_read);
            break;
        }
        default:
            printf("Valor invalido, Saliendo...");
            exit = 1;
        }
    }

    return 0;
}
