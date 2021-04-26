#include "main.h"

int main()
{
    tFecha f;

    while(1)
    {
        ingresoDeFecha(&f);

        printf("\nLa fecha ingresada es %d/%d/%d\n",f.dia,f.mes,f.anio);
        if(esFechaValida(&f))
        {
            sumarUnDia(&f);
            printf("El dia siguiente es %d/%d/%d\n",f.dia,f.mes,f.anio);
        }
        else
        {
            printf("\nLa fecha ingresada no es valida.\n");
        }

        puts("");
    }
    return 0;
}
