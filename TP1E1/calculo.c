#include "calculo.h"

unsigned long long factorial(unsigned long long n)
{
    return n < 0 ? -1 : n == 0 ? 1 : n * factorial (n-1);
}
