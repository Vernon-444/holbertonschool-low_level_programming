#include "main.h"

/**
 * _abs - computes abs of a value
 *
 * @n: num used to calculate abs
 *
 *Return: returns abs of n
 */

int _abs(int n)
{
if (n < 0)
{
n = n * -1;
}
_putchar(n);
return (0);
}
