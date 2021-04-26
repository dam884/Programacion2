#include "main.h"

int main()
{
    // Primero realizar el ingreso de datos
    //// Solicitar el ingreso
    int m, n;
    char continuar = 'y';

    while(continuar == 'y')
    {
        puts("Calcular combinatorio\n---------------------\n");
        printf("Ingresar valor de m: ");
        scanf("%d", &m);
        fflush(stdin);

        printf("Ingresar valor de n (no debe ser menor que 0 ni mayor que m): ");
        scanf("%d", &n);
        fflush(stdin);


        //// Luego validar que sean correctos
        if(validar(m,n))
        {
           // Luego realizar el proceso
           //// Enviarlos a la función y devolver el resultado
           printf("\nEl combinatorio es igual a: %d\n", comb(m,n));
        }
        else
        {
            printf("\nLos valores de m y n no son válidos.\n");
        }

        printf("Desea realizar otro combinatorio? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n\n");
    }

    return 0;
}
