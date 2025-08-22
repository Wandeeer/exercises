#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} Punto;

float distance(Punto a, Punto b)
{
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

int main()
{

    Punto a = {30.223, 20.1};
    Punto b = {228.12, 3.6};

    float res = distance(a, b);
    printf("La distancia es: %.2f\n", res);

    return 0;
}