#include "main.h"

#define ORD 5

int main()
{
    puts("--------------------------");
    puts("Matrices - Sumar elementos");
    puts("--------------------------");

    int eleccion, res=0;
    int m[ORD][ORD]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

    while(1)
    {
        printf("Ingrese diagonal (1-ppal, 2-sec, 3-ppal incluida, 4-debajo ppal, 5 debajo ppal incluida): ");
        scanf("%d", &eleccion);

        if(eleccion == 1)
            res = sumaArribaDiagPpal(m,ORD);

        if(eleccion == 2)
            res = sumaArribaDiagSec(m,ORD);

        if(eleccion == 3)
            res = sumaArribaDiagPpalInc(m,ORD);

        if(eleccion == 4)
            res = sumaDebajoDiagPpal(m,ORD);

        if(eleccion == 5)
            res = sumaDebajoDiagPpalInc(m,ORD);

        if(eleccion < 1 || eleccion > 5)
            puts("\nError: valor no valido.\n");
        else
            printf("\nEl resultado es: %d\n\n", res);
    }

    return 0;
}
