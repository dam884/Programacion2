#include "main.h"

int main()
{
    int n = 0;
    char continuar = 'y';

    while(continuar == 'y')
    {
        puts("Perfecto, deficiente o abundante?\n---------------------\n");
        printf("Ingresar valor de n: ");
        scanf("%d", &n);
        fflush(stdin);

        switch(perfDefAb(n))
        {
            case 0: puts("\nEl numero es DEFICIENTE.\n");
                break;
            case 1: puts("\nEl numero es PERFECTO.\n");
                break;
            case 2: puts("\nEl numero es ABUDANTE.\n");
                break;
        }

        printf("Desea realizar otro? (y/n): ");
        scanf("%c", &continuar);
        fflush(stdin);

        puts("\n");
    }
    return 0;
}
