#include "main.h"

int main()
{
    puts("----------");
    puts("Palindromo");
    puts("----------");

    char cad[MAX];
    // TODO: Caso con mayúsculas, se transforma todo a minúsculas.
    // TODO: Si hay espacios, son ignorados.

    while(1)
    {
        printf("Ingrese una palabra o frase: ");
        fgets(cad, MAX, stdin); // fgets() es más seguro que gets() ya que
                                // nos permite setear el largo máximo.

        if(esPalindromo(cad) && !esCadenaVacia(cad))
            puts("Felicitaciones, es un palindromo.\n");
        else
            puts("La cadena no es un palindromo o esta vacia.\n");
    }

    return 0;
}
