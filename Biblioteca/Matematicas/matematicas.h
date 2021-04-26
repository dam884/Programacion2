#ifndef MATEMATICAS_H_INCLUDED
#define MATEMATICAS_H_INCLUDED

/** typedefs **/
typedef struct
{
    int cociente,resto;
}t_cociente;

/** Prototipos **/
double fact(int n);
double comb(int m, int n);
double pot(float n, int exp);
double potRec(int n, int exp);
double eElevadoAX(int x, float tol);
float raizC(int x, float tol);
int esFibonacci(int n);
double seno(float x, float tol);
int perfDefAb(int n);
int prodSumSuc(int n1,int n2);
t_cociente cocEntero(int a, int b);
int sumaHastaN(int n);
int sumaPrimerosNPares(int n);
int sumaParesMenoresQueN(int n);
int esPrimo(int n);
int multiplicacionRusa(int n1, int n2);
int parteEntera(float x);

#endif // MATEMATICAS_H_INCLUDED
