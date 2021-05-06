#include "main.h"

int main()
{
    // Desarrollar una función que elimine el elemento que ocupa una
    // determinada posición en un arreglo de enteros.

    int vec[]={23,54,67,45,23,54,67,45,45,100};
    int posBorrar = 0;

    puts("Borrar posición de vector");
    puts("-------------------------");

    imprimirVector(vec,TAM);

    while(1)
    {
        printf("\nIngrese la posición del vector que desea borrar: ");
        scanf("%d",&posBorrar);

        if(posBorrar > 0 && posBorrar <= TAM)
        {
            posBorrar--;
            *(vec + posBorrar) = 0;

            imprimirVector(vec,TAM);
        }
        else
        {
            printf("\nEl número debe ser mayor que 0 y menor que %d.\n", TAM);
        }
    }

    return 0;
}
