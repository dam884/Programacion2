#include "main.h"

#define ORDEN 4

int main()
{
    puts("------------------------------");
    puts("Matrices - Es matriz diagonal?");
    puts("------------------------------");
    puts("");

    int m[ORDEN][ORDEN]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    puts("Matriz:\n");
    imprimirMatriz(m, ORDEN);

    if(esMatrizDiagonal(m, ORDEN))
        puts("La matriz es diagonal.");
    else
        puts("La matriz NO es diagonal.");

    return 0;
}
