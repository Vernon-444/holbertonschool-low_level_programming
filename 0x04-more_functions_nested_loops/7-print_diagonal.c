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
	int i, j;

	i = 0;

	if (n < 1)
	{
		_putchar(10);
	}
	
	while (i <= n)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar(10);
		i++;
	}
}
