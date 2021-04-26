#include "main.h"

int main()
{
    float x;

    while(1)
    {
        puts("Parte Entera");
        puts("------------\n");

        printf("Ingrese el numero para obtener su parte entera: ");
        scanf("%f", &x);

        printf("La parte entera es %d.\n", parteEntera(x));

        puts("\n------------\n");
    }
    return 0;
}
