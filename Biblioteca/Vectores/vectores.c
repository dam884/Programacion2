#include "vectores.h"

void iniVector(int* v, int tamanio)
{
    for(;tamanio>0;tamanio--)
        v[tamanio-1]=0;
    return;
}

void imprimirVector(int* v, int tamanio)
{
    for(int i=0;i<tamanio;i++)
        printf("%d\t", v[i]);

    printf("\n");
    return;
}

void insertValorVector(int* v, int valor, int pos)
{
    v[pos-1]=valor;
    return;
}

void insertEnVectorOrdenado(int* v, int n)
{
    int aux, insert = 0;

    for(int i=0; i<TAM; i++)
    {
        if(insert==1)
        {
            n=aux;
            insert=0;
        }

        if(n<=v[i] && insert==0)
        {
            aux = v[i];
            v[i] = n;
            insert=1;
        }
    }
    return;
}

void borrarPrimeraAparicion(int* v, int n)
{
    int pos = 0;

    while(*(v + pos) != n)
    {
        pos++;

        if(pos >= TAM)
            return;

    }

    *(v + pos) = 0;

    return;
}

void borrarTodos(int* v, int n)
{
    int pos = 0;

    while(pos < TAM)
    {
        if(*(v + pos) == n)
            *(v + pos) = 0;

        pos++;
    }

    return;
}
