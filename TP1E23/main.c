#include "main.h"

int main()
{
    // Si el vector está completo, se puede interpretar de dos maneras.
    // La más clásica sería que no se inserte el nuevo elemento y se
    // devuelva algún código relacionado.
    // La otra es que se deseche el último elemento al agregar uno nuevo.
    // Este último acercamiento es menos tradicional pero podría ser el
    // indicado para algunas implementaciones.

    int v[] = {1,1,2,3,5,8,13,21,34,55};
    int n;

    while(1)
    {
        puts("Insertar en vector ordenado");
        puts("---------------------------");
        puts("\nVector original\n");
        imprimirVector(v, TAM);

        printf("\nIngrese el valor a insertar: ");
        scanf("%d", &n);
        fflush(stdin);

        insertEnVectorOrdenado(v, n);

        puts("\nVector final\n");
        imprimirVector(v, TAM);
    }

    return 0;
}
