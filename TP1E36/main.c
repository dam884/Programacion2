#include "main.h"

#define ORDEN 4

int main()
{
    puts("-------------------");
    puts("Matrices - Producto");
    puts("-------------------");
    puts("");

    int m[ORDEN][ORDEN]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n[ORDEN][ORDEN]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int res[ORDEN][ORDEN]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    puts("Matriz:\n");
    imprimirMatriz(m, ORDEN);

    matrizProducto(m, n, res, ORDEN);

    puts("Matriz transpuesta:\n");
    imprimirMatriz(n, ORDEN);

    return 0;
}
