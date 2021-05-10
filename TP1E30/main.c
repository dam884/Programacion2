#include "main.h"

#define TAM 5

int main()
{
    puts("--------------------------------------");
    puts("Matrices - Traza y diagonal secundaria");
    puts("--------------------------------------");

    int m[TAM][TAM]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
        16,17,18,19,20,21,22,23,24,25};

    puts("\nMatriz:\n");
    imprimirMatriz(m,TAM);

    printf("\nLa diagonal principal suma %d y la secundaria %d.\n\n",
           sumaDiagonalPpal(m,TAM),sumaDiagonalSec(m,TAM));

    return 0;
}
