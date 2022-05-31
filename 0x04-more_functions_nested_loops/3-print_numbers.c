#include "main.h"

/**
 * print_numbers - cmon man.
 *
 * Return: 0 on success
 */

void print_numbers(void)
{
	int i;
	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}
	putchar(10);
}
