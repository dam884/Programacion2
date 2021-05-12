#include "matrices.h"

int sumaArribaDiagPpal(int* m, int orden)
{
    int acum = 0;

    // FILAS: La última fila no se llega a contabilizar
    for(int i=0; i < orden-1; i++)
        for(int j=i+1; j < orden; j++) // COLUMNAS
            acum += *(m+i*orden+j);

    return acum;
}

int sumaArribaDiagSec(int* m, int orden)
{
    int acum = 0;

    for(int i=0; i < orden-1; i++)
        for(int j=0; i+j < orden-1; j++)
            acum += *(m+i*orden+j);

    return acum;
}

int sumaArribaDiagPpalInc(int* m, int orden)
{
    int acum = 0;

    for(int i=0; i < orden; i++)
        for(int j=i; j < orden; j++)
            acum += *(m+i*orden+j);

    return acum;
}

int sumaDebajoDiagPpal(int* m, int orden)
{
    int acum = 0;

    for(int i=1; i < orden; i++)
        for(int j=0; j < i; j++)
            acum += *(m+i*orden+j);

    return acum;
}

int sumaDebajoDiagPpalInc(int* m, int orden)
{
    int acum = 0;

    for(int i=0; i < orden; i++)
        for(int j=0; j <= i; j++)
            acum += *(m+i*orden+j);

    return acum;
}

int sumaDiagonalPpal(int* m, int orden)
{
    int acum=0;

    for(int i=0;i < orden;i++)
        acum += *(m+i*(orden+1));

    return acum;
}

int sumaDiagonalSec(int* m, int orden)
{
    int acum=0;

    for(int i=1;i <= orden;i++)
        acum += *(m+i*(orden-1));

    return acum;
}

void imprimirMatriz(int* m, int orden)
{
    for(int i=0; i<orden; i++)
    {
        printf("|\t");

        for(int j=0; j<orden; j++)
            printf("%d\t",*(m+i*orden+j));

        printf("|\n\n");
    }
    return;
}

int esMatrizDiagonal(int* m, int orden)
{
    // Mejorado después de realizar TP1E33
    // Revisa la parte superior e inferior al mismo tiempo
    for(int i=0; i<orden ; i++)
        for(int j=i+1; j<orden ; j++)
            if(*(m+i*orden+j) || *(m+j*orden+i))
                return 0;

    // Parte superior
//    for(int i=0; i<orden ; i++)
//        for(int j=i+1; j<orden ; j++)
//            if(*(m+i*orden+j))
//                return 0;

    // Parte inferior
//    for(int i=1; i<orden ; i++)
//        for(int j=0; j<i ; j++)
//            if(*(m+i*orden+j))
//                return 0;

    return 1;
}

int esMatrizIdentidad(int* m, int orden)
{
    for(int i=0; i<orden ; i++)
        for(int j=0; j<orden ; j++)
            if(*(m+i*orden+j) != 1 && i==j || *(m+i*orden+j) != 0 && i!=j)
                return 0;

    return 1;
}

int esSimetrica(int* m, int orden)
{
    for(int i=0; i<orden ; i++)
        for(int j=i+1; j<orden ; j++)
            if(*(m+i*orden+j) != *(m+j*orden+i))
                return 0;

    return 1;
}

void trasponerMatriz(int* m, int orden)
{
    int aux=0;

    for(int i=0; i<orden ; i++)
        for(int j=i+1; j<orden ; j++)
        {
            aux = *(m+i*orden+j);
            *(m+i*orden+j) = *(m+j*orden+i);
            *(m+j*orden+i) = aux;
        }

    return;
}

void matrizTranspuesta(int* m, int* n, int orden)
{
    for(int i=0; i<orden ; i++)
        for(int j=i; j<orden ; j++)
        {
            *(n+i*orden+j) = *(m+j*orden+i);

            // En el caso que pertenezca a la diagonal
            // no es necesario copiarlo dos veces.
            if(i!=j)
                *(n+j*orden+i) = *(m+i*orden+j);
        }

    return;
}

void matrizProducto(int* m, int* n, int* res, int orden)
{
    for(int i=0; i<orden ; i++)
    {
        for(int j=0; j<orden ; j++)
        {
        }
    }

    return;
}
