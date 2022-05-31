#include "main.h"

/**
 * print_numbers - cmon man.
 *
 * Return: 0 on success
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar(10);
}
