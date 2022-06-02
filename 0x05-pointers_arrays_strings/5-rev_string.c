#include "main.h"
/**
 * print_rev - prints a string to stdout
 *
 * @s: string to be modified
 */

void rev_string(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}

	s--;

	while (count > 0)
	{
		_putchar(*s);
		s--;
		count--;
	}
	_putchar(10);
}
