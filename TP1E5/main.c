#include "main.h"

int main()
{
    // Primero realizar el ingreso de datos
    //// Solicitar el ingreso
    int n;

    char continuar = 'y';

    while(continuar == 'y')
    {
        puts("Es Fibonacci?\n---------------------\n");
        printf("Ingresar valor de n: ");
        scanf("%d", &n);
        fflush(stdin);

        if(esFibonacci(n))
        {
           puts("\n¡Felicidades! Tu numero es un Fibonacci.\n");
        }
        else
        {
            puts("\nEl numero ingresado no es Fibonacci.\n");
        }

        printf("Desea realizar otro? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n");
    }
    return 0;
}
