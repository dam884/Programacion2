#include "main.h"

int main()
{
    // Primero realizar el ingreso de datos
    //// Solicitar el ingreso
    int x;
    float tol;
    char continuar = 'y';

    while(continuar == 'y')
    {
        puts("Calcular raiz cuadrada\n---------------------\n");
        printf("Ingresar valor de x: ");
        scanf("%d", &x);
        fflush(stdin);

        printf("Ingresar valor de tolerancia: ");
        scanf("%f", &tol);
        fflush(stdin);


        //// Luego validar que sean correctos
        if(validar(x,tol))
        {
           // Luego realizar el proceso
           //// Enviarlos a la función y devolver el resultado
           printf("\nLa raíz cuadrada es igual a: %f\n", raizC(x,tol));
        }
        else
        {
            printf("\nLos valores de x y tol no son válidos.\n");
        }

        printf("Desea realizar otro calculo? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n");
    }
    return 0;
}
