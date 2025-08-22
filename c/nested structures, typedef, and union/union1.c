#include <stdio.h>

union Data
{
    int entero;
    float decimal;
    char letra;
};

int main()
{

    union Data new_date;

    // Aprender a ver como se modifican los cambios de asignacion en memoria
    new_date.entero = 50;
    printf("Nuevo valor de new_date : %d\n", new_date.entero);

    new_date.decimal = 30.34;
    printf("Nuevo valor de new_date : %.2f\n", new_date.decimal);

    new_date.letra = 'A';
    printf("Nuevo valor de new_date : %c\n", new_date.letra);

    // Aqui el valor se descompone ya que fue sobrescibido por el decimal y por ende solo muestra datos corrompidos o numeros aleatorios
    printf("Verificamos el valor de el entor a ver si este aparece : %d\n", new_date.entero);
    // Este casa es algo particular ya que "union" es algo tramposo, si imprimes esto veras que si se imprime
    // el valor que le fue dado ace un momento pero en realidad no es asi
    // lo que hace union es sobrescribir los bytes y como float ocupa 4 bytes y char solo 1 byte
    // creo que puedes imaginarlo, este no se sobrescribe por completo ya que el char solo esta agarrando 1 byte
    // de esos 4, asique todivia medio que existe el decimal en esos 3 bytes.
    // Pero cabe decir que no porque se muestre siga siendo un valor valido que se pueda maipular
    // asique hay que tener cuidado con esos datos.
    printf("Ahora el decimal : %.2f\n", new_date.decimal);
    printf("Por ultimo la letra : %c\n", new_date.letra);

    return 0;
}