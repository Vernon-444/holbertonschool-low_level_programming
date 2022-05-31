#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: number
 *
 * Return: 0 on success
 */

void print_line(int n)
{
	int i;

	if (n < 0)
	{
		n = n * -1;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
