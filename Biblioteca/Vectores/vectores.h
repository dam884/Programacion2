#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void iniVector(int* v, int tamanio);
void imprimirVector(int* v, int tamanio);
void insertValorVector(int* v, int valor, int pos);
void insertEnVectorOrdenado(int* v, int n);
void borrarPrimeraAparicion(int* v, int n);
void borrarTodos(int* v, int n);

#endif // VECTORES_H_INCLUDED
