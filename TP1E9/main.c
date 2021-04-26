#include "main.h"

int main()
{
    int a = 0, b = 0;
    t_cociente resultado;
    char continuar = 'y';

    while(continuar == 'y')
    {
        puts("Cociente entero y resto");
        puts("-----------------------\n");
        printf("Ingresar valor de A: ");
        scanf("%d", &a);
        fflush(stdin);
        printf("Ingresar valor de B: ");
        scanf("%d", &b);
        fflush(stdin);

        if(a < 0 || b <= 0)
        {
            printf("Se deben ingresar numeros naturales. B no puede ser cero.");
        }
        else
        {
            resultado = cocEntero(a,b);
            printf("El cociente entero es %d y el resto es %d\n", resultado.cociente, resultado.resto);
        }

        printf("Desea realizar otro? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n");
    }
    return 0;
}
