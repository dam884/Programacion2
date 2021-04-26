#include "main.h"

int main()
{
    int n = 0;

    char continuar = 'y';

    while(continuar == 'y')
    {
        puts("n es primo?");
        puts("-----------\n");
        printf("Ingresar valor de n: ");
        scanf("%d", &n);
        fflush(stdin);

        if(n<=1)
        {
            puts("El valor de n debe ser un numero natural mayor que 1 (1 no es primo).");
        }
        else if(esPrimo(n))
        {
            puts("Felicitaciones! n es un numero primo");
        }
        else
        {
            puts("Lamentablemente, n no es primo");
        }

        printf("Desea realizar otro? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n");
    }
    return 0;
}
