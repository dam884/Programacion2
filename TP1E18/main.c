#include "main.h"

int main()
{
    tFecha f1, f2;

    while(1)
    {
        puts("Diferencia de fechas");
        puts("--------------------\n");
        ingresoDeFecha(&f1);
        printf("La fecha ingresada es %d/%d/%d\n\n",f1.dia,f1.mes,f1.anio);

        ingresoDeFecha(&f2);
        printf("La fecha ingresada es %d/%d/%d\n\n",f2.dia,f2.mes,f2.anio);

        if(esFechaValida(&f1) && esFechaValida(&f2))
        {
            printf("La diferencia entre fechas es de %d dias.\n",
                   diferenciaEntreFechas(&f1, &f2));
        }
        else
        {
            printf("Una de las fechas ingresadas no es valida.\n");
        }

        puts("--------------------\n");
    }
    return 0;
}
