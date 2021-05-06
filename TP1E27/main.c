#include "main.h"

int main()
{
    puts("----------");
    puts("Palindromo");
    puts("----------");

    char cad[MAX];
    // TODO: Caso con may�sculas, se transforma todo a min�sculas.
    // TODO: Si hay espacios, son ignorados.

    while(1)
    {
        printf("Ingrese una palabra o frase: ");
        fgets(cad, MAX, stdin); // fgets() es m�s seguro que gets() ya que
                                // nos permite setear el largo m�ximo.

        if(esPalindromo(cad) && !esCadenaVacia(cad))
            puts("Felicitaciones, es un palindromo.\n");
        else
            puts("La cadena no es un palindromo o esta vacia.\n");
    }

    return 0;
}
