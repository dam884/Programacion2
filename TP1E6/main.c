#include "main.h"

int main()
{
    float x = 0, tol = 0;

    char continuar = 'y';

    while(continuar == 'y')
    {
        puts("Calcular seno de x\n---------------------\n");
        printf("Ingresar valor de x: ");
        scanf("%f", &x);
        fflush(stdin);
        printf("Ingresar tolerancia: ");
        scanf("%f", &tol);
        fflush(stdin);

        printf("\nEl seno de %f es %lf.\n", x, seno(x, tol));

        printf("Desea realizar otro? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n");
    }
    return 0;
}
