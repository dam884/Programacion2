#include "main.h"

int main()
{
    puts("--------------------------------");
    puts("Convertir cadena a entero (atoi)");
    puts("--------------------------------");
    puts("");

    char cad[MAX];

    while(1)
    {
        printf("Ingrese un numero entero: ");
        fgets(cad, MAX, stdin);

        printf("\nEl numero es: %d", atoiMio(cad));

        puts("\n");
    }

    return 0;
}
