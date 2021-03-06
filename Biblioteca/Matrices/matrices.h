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
int esMatrizIdentidad(int* m, int orden);
int esSimetrica(int* m, int orden);
void trasponerMatriz(int* m, int orden);
void matrizTranspuesta(int* m, int* n, int orden);

#endif // MATRICES_H_INCLUDED
