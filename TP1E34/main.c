#include "main.h"

#define ORDEN 4

int main()
{
    puts("---------------------");
    puts("Matrices - Transponer");
    puts("---------------------");
    puts("");

    int m[ORDEN][ORDEN]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    puts("Matriz:\n");
    imprimirMatriz(m, ORDEN);

    transponerMatriz(m, ORDEN);

    puts("Matriz transpuesta:\n");
    imprimirMatriz(m, ORDEN);

    return 0;
}
