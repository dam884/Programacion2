#include "main.h"

const char* nombreDiaDeLaSemana(int dia)
{
    if(dia == 0)
        return "Domingo";
    if(dia == 1)
        return "Lunes";
    if(dia == 2)
        return "Martes";
    if(dia == 3)
        return "Miercoles";
    if(dia == 4)
        return "Jueves";
    if(dia == 5)
        return "Viernes";
    return "Sabado";
}

int main()
{
    tFecha f;

    while(1)
    {
        puts("Dia de la semana");
        puts("----------------\n");
        ingresoDeFecha(&f);
        printf("La fecha ingresada es %d/%d/%d\n\n",f.dia,f.mes,f.anio);

        if(esFechaValida(&f))
        {
            printf("El dia de la semana es %s.\n", nombreDiaDeLaSemana(diaDeLaSemana(&f)));
        }
        else
        {
            printf("La fecha ingresada no es valida.\n");
        }

        puts("\n--------------------\n");
    }
    return 0;
}
