#include "main.h"

int main()
{
    int n = 0;

    char continuar = 'y';

    while(continuar == 'y')
    {
        puts("Suma de los pares menores que n");
        puts("-------------------------------\n");
        printf("Ingresar valor de n: ");
        scanf("%d", &n);
        fflush(stdin);

        if(n<0)
        {
            puts("El valor de n debe ser un numero natural.");
        }
        else
        {
            printf("La suma de los pares menores que %d es igual a %d\n", n, sumaParesMenoresQueN(n));
        }

        printf("Desea realizar otro? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n");
    }
    return 0;
}
