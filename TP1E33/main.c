#include "main.h"

#define ORDEN 4

int main()
{
    puts("------------------------");
    puts("Matrices - Es simetrica?");
    puts("------------------------");
    puts("");

    int m[ORDEN][ORDEN]={1,0,0,5,0,6,9,0,0,9,11,1,5,0,1,16};

    puts("Matriz:\n");
    imprimirMatriz(m, ORDEN);

    if(esSimetrica(m, ORDEN))
        puts("La matriz es simetrica.");
    else
        puts("La matriz NO es simetrica.");

    return 0;
}
