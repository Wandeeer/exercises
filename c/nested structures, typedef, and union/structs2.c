#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Event
{
    char title[50];
    struct Date event_date;
    float time;
};

void new_event(struct Event *e)
{

    printf("\nIngrese a continuacion los siguientes datos:\n");

    printf("\nNombre del evento: ");
    getchar();
    fgets(e->title, sizeof(e->title), stdin);

    printf("\n----- Datos de fecha del evento -----\n");
    printf("\nDia: ");
    scanf("%d", &e->event_date.day);
    printf("\nMes: ");
    scanf("%d", &e->event_date.month);
    printf("\nAnio: ");
    scanf("%d", &e->event_date.year);

    printf("\n-------------------------------------\n");

    printf("\nHora del evento: ");
    scanf("%f", &e->time);
}

int main()
{

    struct Event new;
    new_event(&new);

    printf("\n----- Datos del evento -----\n");
    printf("\nNombre : %sFecha : %d / %d / %d\nHora : %.2f\n", new.title, new.event_date.day, new.event_date.month, new.event_date.year, new.time);
    printf("\n----------------------------\n");
    return 0;
}