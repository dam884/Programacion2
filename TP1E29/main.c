#include "main.h"

#define ORD 4

int main()
{
    puts("--------------------------");
    puts("Matrices - Sumar elementos");
    puts("--------------------------");

    int eleccion;
    int m[ORD][ORD]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    while(1)
    {
        printf("Ingrese diagonal (1-ppal, 2-sec, 3-ppal incluida, 4-debajo ppal, 5 debajo ppal incluida): ");
        scanf("%d", &eleccion);

        if(eleccion == 1)
            printf("\nEl resultado es: %d\n\n", sumaArribaDiagPpal(m,ORD));

        if(eleccion == 2)
            printf("\nEl resultado es: %d\n\n", sumaArribaDiagSec(m,ORD));

        if(eleccion == 3)
            printf("\nEl resultado es: %d\n\n", sumaArribaDiagPpalInc(m,ORD));

        if(eleccion == 4)
            printf("\nEl resultado es: %d\n\n", sumaDebajoDiagPpal(m,ORD));

        if(eleccion == 5)
            printf("\nEl resultado es: %d\n\n", sumaDebajoDiagPpalInc(m,ORD));
    }

    return 0;
}
