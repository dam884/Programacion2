#include "main.h"

int main()
{
    // Desarrollar una funci�n que elimine la primera aparici�n de un
    // elemento determinado de un arreglo de enteros.

    int vec[]={65,33,84,84,3428,2348,987,443,478,21};
    int num = 0;

    puts("Borrar numero de vector - Primera aparici�n");
    puts("-------------------------------------------");
    puts("");
    imprimirVector(vec, TAM);

    while(1)
    {
        printf("\nIngrese numero a borrar: ");
        scanf("%d", &num);

        borrarPrimeraAparicion(vec, num);

        imprimirVector(vec, TAM);
    }

    return 0;
}
