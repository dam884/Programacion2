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

    while(*(v + pos) != n) // Mientras no se encuentre el numero sigue.
    {
        pos++;

        if(pos >= TAM) // Si se acaba el arreglo se termina.
            return;
    }

    *(v + pos) = 0; // Como no se terminó, se encontró el número.

    return;
}

void borrarTodos(int* v, int n)
{
    int pos = 0;

    while(pos < TAM) // Mientras no se acabe el arreglo
    {
        if(*(v + pos) == n) // Si es el número se borra.
            *(v + pos) = 0;

        pos++;
    }

    return;
}
