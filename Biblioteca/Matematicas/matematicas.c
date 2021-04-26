#include "matematicas.h"

/** factorial **/
double fact(int n)
{
    return n <= 0 ? 1 : n * fact (n-1);
}

/** combinatorio **/
double comb(int m, int n)
{
    return fact(m)/(fact(n)*fact(m - n));
}

/** potencia **/
double pot(float n, int exp)
{
    double res = 1;

    for(; exp!=0; exp--)
        res = res * n;

    return res;
}

/** potencia recursiva **/
double potRec(int n, int exp)
{
    return exp == 0 ? 1 : n * potRec(n, exp - 1);
}

/** e elevado a la x **/
double eElevadoAX(int x, float tol)
{
    double resultado = 0, termino = 1;

    for(int i = 1; termino >= tol; i++)
    {
        resultado += termino;
        termino = pot(x,i)/fact(i);
    }

    return resultado;
}

/** raiz cuadrada de x **/
float raizC(int x, float tol)
{
    float resultado = 0, termino = 1;

    do
    {
        resultado = termino;
        termino = 0.5 * (resultado+(((float)x)/resultado));
    }while(resultado - termino >= tol || resultado - termino <= -tol);

    return resultado;
}

/** Es Fibonacci **/
int esFibonacci(int n)
{
    int ant = 1, act = 1, aux = 0;

    while(act < n)
    {
        aux = ant;
        ant = act;
        act = ant + aux;
    }

    return act == n;
}

/** Seno de x **/
double seno(float x, float tol)
{
    double resultado = 0, termino = x;
    int signo = -1;

    for(int i=3; termino >= tol || termino <= -tol; i+=2)
    {
        resultado += termino;
        termino = signo * pot(x, i)/fact(i);
        signo = -signo;
    }

    return resultado;
}

/** Perfecto, deficiente o abundante **/
int perfDefAb(int n)
{
    int suma = 0;
    // Devuelve 2 si es abundante, 1 si es perfecto, 0 si es deficiente
    for(int i = 1; i <= n/2; i++)
    {
        suma += (n%i == 0)? i : 0;
    }

    return suma > n ? 2 : (suma == n ? 1 : 0);
}

/** Producto por sumas sucesivas **/
int prodSumSuc(int n1,int n2)
{
    int res = 0;

    for(;n1 > 0; n1--)
    {
        res += n2;
    }

    return res;
}

/** Cociente entero **/
t_cociente cocEntero(int a, int b)
{
    t_cociente resultado;
    resultado.cociente = a/b;
    resultado.resto = a%b;
    return resultado;
}

/** Suma de 0 hasta n **/
int sumaHastaN(int n)
{
    return n > 0 ? n + sumaHastaN(n-1) : 0;
}

/** Suma de los primeros n numeros pares **/
int sumaPrimerosNPares(int n)
{
    return n > 0 ? 2*n + sumaPrimerosNPares(n-1) : 0;
}

/** Suma de pares menores que n **/
int sumaParesMenoresQueN(int n)
{
    return n%2 == 0 ? sumaPrimerosNPares((n/2)-1) : sumaPrimerosNPares(n/2);
}

/** Es primo? **/
int esPrimo(int n)
{
    int primo = 1;
    for(int i = n/2; i>1; i--)
    {
        if(n%i==0)
            primo = 0;
    }
    return primo;
}

/** Multiplicación Rusa **/
int multiplicacionRusa(int n1, int n2)
{
    int resultado = 0;

    for(; n1>1; n1/=2, n2*=2)
    {
        if( n1%2!=0 )
        {
            resultado+=n2;
        }
    }

    return resultado+n2;
}

/** Parte entera **/
int parteEntera(float x)
{
    int i=0, signo=1;

    if(x<0)
    {
        x = -x;
        signo = -signo;
    }

    for(; x>=1; i++)
        x--;

    return signo*i;
}
