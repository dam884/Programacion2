#include "main.h"

#define TAM 10

int main()
{
    int vector[TAM];

    iniVector(vector, TAM);

    while(1)
    {
        imprimirVector(vector, TAM);
    }


    return 0;
}
