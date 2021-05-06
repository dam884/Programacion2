#include "cadenas.h"

char* ultimoCaracter(char* cad)
{
    // Muevo ultPos hasta el último caractér válido.
    while(*(cad + 1) != '\0' && *(cad + 1) != '\n')
        cad++;

    return cad;
}

int esCadenaVacia(char* cad)
{
    return *cad == '\0' || *cad == '\n';
}

int esImprimible(char c)
{
    return c > 32 && c < 127;
}

char aMinus(char c)
{
    return (c > 64 && c < 91)*('a' - 'A') + c;
}

int esFinal(char c)
{
    return c == '\0' || c == '\n';
}

int esPalindromo(char* cad)
{
    char* pos=cad;
    char* ultPos = ultimoCaracter(cad);

    // Comparo los últimos con los primeros, hasta llegar a la mitad.
    while(ultPos > pos)
    {
        if(aMinus(*pos) != aMinus(*ultPos))
            return 0;

        pos++;
        ultPos--;

        // Caso espacios
        while(!esImprimible(*pos) && !esFinal(*pos))
            pos++;
        while(!esImprimible(*ultPos) && !esFinal(*pos))
            ultPos--;
    }

    return 1;
}


