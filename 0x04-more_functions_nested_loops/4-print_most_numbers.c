#include "main.h"
/**
 * print_most_numbers - prints 0-9 except 2 & 4
 *
 * @i: variable for count and comparison
 *
 * return: 0 on success
 */

void print_most_numbers(void)
{
	int i = 0;
	while (i < 10)
	{
		if (i != 2 || c != 4)
		{
			_putchar(i);
			i++;
		}
		else
		{
			i++;
		}
	}
	_putchar(10);
}
