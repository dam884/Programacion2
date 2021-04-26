#include "main.h"

int main()
{
    tFecha f;

    while(1)
    {
        ingresoDeFecha(&f);
        printf("La fecha %d/%d/%d", f.dia,f.mes,f.anio);
        esFechaValida(&f) ?
            printf(" es valida.") : printf(" no es valida.");
        puts("\n\nPresione ENTER para ingresar otra fecha");
        getchar();
    }

    return 0;
}


