#include "main.h"

int main()
{
    int n1 = 0, n2 = 0;
    char continuar = 'y';

    while(continuar == 'y')
    {
        puts("Producto por sumas sucesivas");
        puts("----------------------------\n");
        printf("Ingresar valor de n1: ");
        scanf("%d", &n1);
        fflush(stdin);
        printf("Ingresar valor de n2: ");
        scanf("%d", &n2);
        fflush(stdin);

        if(n1 < 0 || n2 < 0)
        {
            printf("Se deben ingresar numeros naturales.");
        }
        else
        {
            printf("\nEl resultado es %d\n", prodSumSuc(n1,n2));
        }

        printf("Desea realizar otro? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n");
    }
    return 0;
}
