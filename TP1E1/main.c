#include "main.h"

int main()
{
    // Primero realizar el ingreso de datos
    //// Solicitar el ingreso
    int n;
    char continuar = 'y';

    while(continuar == 'y')
    {
        puts("Calcular factorial");
        puts("------------------\n");
        printf("Ingresar valor de n: ");
        scanf("%d", &n);
        fflush(stdin);

        //// Luego validar que sean correctos
        if(n>=0)
        {
           // Luego realizar el proceso
           //// Enviarlos a la función y devolver el resultado
           printf("\nEl factorial es igual a: %.0f\n", fact(n));
        }
        else
        {
            printf("\nLos valores de n no son válidos.\n");
        }

        printf("Desea realizar otro factorial? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n");
    }
    return 0;
}
