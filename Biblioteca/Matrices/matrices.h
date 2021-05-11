#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int sumaArribaDiagPpal(int* m, int orden);
int sumaArribaDiagSec(int* m, int orden);
int sumaArribaDiagPpalInc(int* m, int orden);
int sumaDiagonalPpal(int* m, int orden);
int sumaDiagonalSec(int* m, int orden);
void imprimirMatriz(int* m, int orden);
int esMatrizDiagonal(int* m, int orden);

#endif // MATRICES_H_INCLUDED
