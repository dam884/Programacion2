#include "main.h"

#define ORDEN 4

int main()
{
    puts("------------------------------");
    puts("Matrices - Es matriz identidad?");
    puts("------------------------------");
    puts("");

    int m[ORDEN][ORDEN]={1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};

    puts("Matriz:\n");
    imprimirMatriz(m, ORDEN);

    if(esMatrizIdentidad(m, ORDEN))
        puts("La matriz es identidad.");
    else
        puts("La matriz NO es identidad.");

    return 0;
}
