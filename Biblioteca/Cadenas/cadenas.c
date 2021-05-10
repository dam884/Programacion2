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

int atoiMio(char* cad)
{
    // int cont=0;
    int acum=0, signo=1;

    while(*cad < '!')
        cad++;

    if(*cad == '-')
    {
        signo*=-1;
        cad++;
    }

    for(;*cad >= '0' && *cad <= '9'; cad++)
        acum = acum * 10 + *cad - '0';

//    while(*(cad+1) >= '0' && *(cad+1) <= '9')
//    {
//        cad++;
//        cont++;
//    }

//    if(cont == 0)
//        return 0;
//
//    for(int i=0;i<=cont; i++)
//    {
//        acum+=(*cad-48)* signo * pow(10,i);
//        cad--;
//    }

    return signo * acum;
}


