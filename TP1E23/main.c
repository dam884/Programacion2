#include "main.h"

int main()
{
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
