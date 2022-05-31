#include "main.h"
/**
 * print_diagonal - prints diagonal lines based on value inserted
 *
 * @n: num of lines
 *
 * return: 0 on success
 */

void print_diagonal(int n)
{
	int i;

	if(n < 1)
	{
		_putchar(10);
	}

	for (i = n; i > 0; i--)
	{
		_putchar(' ');
	}
	_putchar('\');
	_putchar(10);
}
