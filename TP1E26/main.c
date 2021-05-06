#include "main.h"

int main()
{
    // Desarrollar una función que elimine todas las apariciones de un
    // elemento determinado de un arreglo de enteros.

    int vec[]={65,33,84,84,3428,2348,987,84,33,84};
    int num = 0;

    puts("---------------------------------------------------");
    puts("| Borrar numero de vector - Todas las apariciones |");
    puts("---------------------------------------------------");
    puts("");
    imprimirVector(vec, TAM);

    while(1)
    {
        printf("\nIngrese numero a borrar: ");
        scanf("%d", &num);

        borrarTodos(vec, num);

        imprimirVector(vec, TAM);
    }

    return 0;
}
