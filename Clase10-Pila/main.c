#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

char* sumar(const char* num1,const char* num2,char* suma);
int cargarPila(const char* num,Pila* p,int cantCeros);
int cargarVector(Pila* p, char* num);
int charAInt(char c);
char intAChar(int i);

int main()
{

    return 0;
}


char* sumar(const char* num1,
            const char* num2,
            char* suma)
{
    Pila pNum1, pNum2, pSuma;

    crearPila(&pNum1);
    crearPila(&pNum2);
    crearPila(&pSuma);

    int cantDigN1 = strlen(num1);
    int cantDigN2 = strlen(num2);
    int cantCeros = cantDigN1 - cantDigN2;

    int cantCerosP1 = cantCeros < 0 ? -cantCeros : 0;
    int cantCerosP2 = cantCeros > 0 ? cantCeros : 0;

    cargarPila(num1, &pNum1, cantCerosP1);
    cargarPila(num2, &pNum2, cantCerosP2);

    char dig1C, dig2C, digSC;
    int digNum1, digNum2, acarreo = 0, digSuma;

    while(!pilaVacia(pNum1))
    {
        desapilar(&pNum1, &dig1C, sizeof(char));
        desapilar(&pNum2, &dig2C, sizeof(char));
        digSuma = charAInt(dig1C) + charAInt(dig2C) + acarreo;
        acarreo = digSuma / 10;
        digSuma %= 10;
        digSC = intAChar(digSuma);
        apilar(&pSuma, &digSC, sizeof(char));
    }

    if(acarreo == 1)
    {
        char acarreoC = '1';
        apilar(&pSuma, &acarreoC, sizeof(char));
    }

    cargarVector(&pSuma, suma);

    return suma;
}


int cargarPila(const char* num, Pila* p, int cantCeros)
{
    char cero = '0';

    for(int i = 0; i<cantCeros; i++)
    {
        if(!apilar(p, &cero, sizeof(char)))
            return 0;
    }

    char* act = num;

    while(*act != '\0')
    {
        if(!apilar(p, act, sizeof(char)))
            return 0;

        act++;
    }

    return 1;
}

void cargarVector(Pila* p, char* num)
{
    char* act = num;

    while(!pilaVacia(p))
    {
        desapilar(p, act, sizeof(char));
        act++;
    }

    return;
}

int charAInt(char c)
{
    return c - '0';
}

char intAChar(int i)
{
    return i + '0';
}
