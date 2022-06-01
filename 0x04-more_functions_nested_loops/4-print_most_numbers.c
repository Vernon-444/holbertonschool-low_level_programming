#include "main.h"
/**
 * print_most_numbers - prints 0-9 except 2 & 4
 *
 * return: 0 on success
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + 48);
		}
			i++;
	}
	_putchar(10);
}
