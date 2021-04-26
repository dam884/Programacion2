#include "fechas.h"

int esBisiesto(int mes, int anio)
{
    return (anio%4 == 0 && anio%100 != 0) || anio%400 == 0;
}

int cantDiasMes(int mes, int anio)
{
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
        return 30;

    if(mes == 2)
        return esBisiesto(mes,anio)? 29 : 28;

    return 31;
}

int esFechaValida(const tFecha* f)
{
    if(f->anio < 1601)
        return 0;
    if(f->mes < 1 || f->mes > 12)
        return 0;
    if(f->dia < 1 || f->dia > cantDiasMes(f->mes,f->anio))
        return 0;
    return 1;
}

void sumarUnDia(tFecha* f)
{
    // Caso general
    f->dia += 1;
    if(esFechaValida(f))
        return;

    // Caso fin de mes
    f->dia = 1;
    f->mes += 1;
    if(esFechaValida(f))
        return;

    // Caso fin de año
    f->mes = 1;
    f->anio += 1;
    return;

}

void restarUnDia(tFecha* f)
{
    // Caso general
    f->dia -= 1;
    if(f->dia>0) //Optimización 12/04/2021 DM if(esFechaValida(f)) Código anterior
        return;

    // Caso principio de mes
    if(f->mes == 1)
    {
        // Caso enero
        f->dia = 31;
        f->mes = 12;
        f->anio -= 1;
    }
    else
    {
        // Caso otros meses
        f->mes -= 1;
        f->dia = cantDiasMes(f->mes, f->anio);
    }

    return;

}

void sumarNDias(tFecha* f, int n)
{
    for(; n>0; n--)
        sumarUnDia(f);

    return;
}

void sumarNDiasPan(tFecha* f, int n)
{
    int cdm = cantDiasMes(f->mes, f->anio);

    f->dia += n;

    while(f->dia > cdm)
    {
        f-> dia -= cdm;
        f->mes += 1;

        if(f->mes > 12)
        {
            f->mes = 1;
            f->anio += 1;
        }

        cdm = cantDiasMes(f->mes, f->anio);
    }

    return;
}

void restarNDias(tFecha* f, int n)
{
    for(; n>0; n--)
        restarUnDia(f);

    return;
}

int esFechaIgual(tFecha* f1, tFecha* f2)
{
    return f1->anio == f2->anio && f1->mes == f2->mes && f1->dia == f2->dia;
}

int esFechaMayor(tFecha* f1, tFecha* f2)
{
    if(f1->anio < f2->anio) // Caso año distinto
        return 0;
    else if (f1->anio > f2->anio)
        return 1;

    if(f1->mes < f2->mes) // Caso mes distinto
        return 0;
    else if (f1->mes > f2->mes)
        return 1;

    if(f1->dia > f2->dia) // Caso día distinto
        return 1;

    return 0;
}

int contarDiasDesdeHasta(tFecha* desde, tFecha* hasta)
{
    int i = 0;

    for(;!esFechaIgual(desde,hasta);i++)
        sumarUnDia(desde);

    return i;
}

int diferenciaEntreFechas(tFecha* f1, tFecha* f2)
{
    if(esFechaMayor(f1, f2))
    {
        return contarDiasDesdeHasta(f2,f1);
    }

    return contarDiasDesdeHasta(f1,f2);
}

int diaDeLaSemana(tFecha* f)
{
    return (f->dia+=f->mes<3?f->anio--:f->anio-2,23*f->mes/9+f->dia+4+f->anio/4-f->anio/100+f->anio/400)%7;
}

void ingresoDeFecha(tFecha* fecha)
{
    printf("Ingrese dia: ");
    scanf("%d",&fecha->dia);
    fflush(stdin);

    printf("Ingrese mes: ");
    scanf("%d",&fecha->mes);
    fflush(stdin);

    printf("Ingrese anio: ");
    scanf("%d",&fecha->anio);
    fflush(stdin);

    puts("");

    return;
}
