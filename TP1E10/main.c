#include "main.h"

int main()
{
    int n = 0;

    char continuar = 'y';

    while(continuar == 'y')
    {
        puts("Suma de 0 a n");
        puts("-------------\n");
        printf("Ingresar valor de n: ");
        scanf("%d", &n);
        fflush(stdin);

        if(n<0)
        {
            puts("El valor de n debe ser un numero natural.");
        }
        else
        {
            printf("La suma de 0 hasta n es igual a %d\n",sumaHastaN(n));
        }

        printf("Desea realizar otro? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n");
    }
    return 0;
}
