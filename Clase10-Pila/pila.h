#ifndef PILA_H
#define PILA_H

typedef struct
{

}
Pila;

void crearPila(Pila* p);
int apilar(Pila* p, const void* dato, size_t tamDato);
int desapilar(Pila* p, void* dato, size_t tamDato);
int verTope(const Pila* p, void* dato);
int pilaVacia(const Pila* p);
int pilaLlena(const Pila* p);
int vaciarPila(Pila* p);
