#include "main.h"

/**
 * _abs - computes abs of a value
 *
 * @n: num used to calculate abs
 *
 * Return: 0 on success
 */

int _abs(int n)
{
if (n < 0)
{
n = n * -1;
}
return(n);
}
