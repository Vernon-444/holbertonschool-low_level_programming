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

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar(10);
		}

		_putchar('_');
	}
	_putchar(10);
}
