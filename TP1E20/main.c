#include "main.h"

int main()
{
    int n1, n2;

    while(1)
    {
        puts("Multiplicacion Rusa");
        puts("-------------------\n");

        printf("Ingrese el primer numero: ");
        scanf("%d", &n1);

        printf("Ingrese el segundo numero: ");
        scanf("%d", &n2);

        if(n1 > 0 && n2 > 0)
        {
            printf("El resultado de la multiplicacion es %d.\n", multiplicacionRusa(n1,n2));
        }
        else
        {
            printf("Los numeros ingresados deben ser naturales.\n");
        }

        puts("\n-------------------\n");
    }
    return 0;
}
