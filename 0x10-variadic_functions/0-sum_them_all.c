#include "variadic_functions.h"

/**
 * sum_them_all - gets sum of all parameters (params vary in number)
 *
 * @n: num of params being fed into function
 *
 * Return: if n=0: 0. else return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	va_start(list, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}

