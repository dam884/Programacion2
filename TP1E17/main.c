#include "main.h"

int main()
{
    tFecha f;
    int n;

    while(1)
    {
        puts("Resta de dias");
        puts("-------------\n");
        ingresoDeFecha(&f);
        printf("La fecha ingresada es %d/%d/%d\n",f.dia,f.mes,f.anio);

        printf("Ingrese numero de dias: ");
        scanf("%d", &n);
        fflush(stdin);

        if(esFechaValida(&f) && n>=0)
        {
            restarNDias(&f, n);
            printf("\nLa fecha seria %d/%d/%d\n",f.dia,f.mes,f.anio);
        }
        else
        {
            printf("\nLa fecha o el numero ingresado no es valido.\n");
        }

        puts("");
    }
    return 0;
}
