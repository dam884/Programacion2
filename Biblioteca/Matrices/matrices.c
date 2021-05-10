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
