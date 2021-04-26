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
        puts("Calcular e elevado a x\n----------------------\n");
        printf("Ingresar valor de X: ");
        scanf("%d", &x);
        fflush(stdin);

        printf("Ingresar la TOLERANCIA: ");
        scanf("%f", &tol);
        fflush(stdin);


        //// Luego validar que sean correctos
        if(validar(x,tol))
        {
           // Luego realizar el proceso
           //// Enviarlos a la función y devolver el resultado
           printf("\nEl resultado es igual a: %f\n", eElevadoAX(x,tol));
        }
        else
        {
            printf("\nValores ingresados no validos.\n");
        }

        printf("Desea realizar otro calculo? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n----------------------");
    }

    return 0;
}
