#include <stdio.h>

void read_notebook(FILE *f) {
    f = fopen("files/notebook.txt", "r");
    if (f == NULL) {
        printf("Error al tratar de leer el archivo...");
        return;
    }
    char text[50];
    while(fgets(text, sizeof(text), f) != NULL) {
        printf("\n\n%s\n", text);
    }

    fclose(f);
}

int main()
{
    FILE *file;
     
    int opt = 0;
    int exit = 0;

    while(exit == 0) {

        printf("\nQue desea hacer: \n\n1:Abrir y escribir\n2:Abrir y leer\n\n");
        scanf("%d", &opt);
        
        switch(opt) {
            case 1: {
                
                file = fopen("files/notebook.txt", "w");

                if(file == NULL) {
                    printf("Error al abrir el archivo...");
                    return 1;
                }

                printf("Proceda a escribir Sr\n\n");

                char text[50];
                getchar();
                fgets(text, sizeof(text), stdin);

                fprintf(file, "%s", text);
                fclose(file);
                break;
            }

            case 2:

                read_notebook(file);
                break;

            default:
                printf("Valor invalido, Saliendo...");
                exit = 1; 
        }
    }

    return 0;
}
