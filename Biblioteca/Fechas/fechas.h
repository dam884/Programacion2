#ifndef FECHAS_H_INCLUDED
#define FECHAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia,
        mes,
        anio;
}tFecha;

void ingresoDeFecha(tFecha* f);
int esFechaValida(const tFecha* f);
void sumarUnDia(tFecha* f);
void sumarNDias(tFecha* f, int n);
void restarUnDia(tFecha* f);
void restarNDias(tFecha* f, int n);
int esFechaMayor(tFecha* f1, tFecha* f2);
int diferenciaEntreFechas(tFecha* f1, tFecha* f2);
int diaDeLaSemana(tFecha* f1);


#endif // FECHAS_H_INCLUDED
