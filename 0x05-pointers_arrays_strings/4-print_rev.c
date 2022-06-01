#include "main.h"
/**
 * print_rev - prints a string to stdout
 *
 * @s: increment char
 */

void print_rev(char *s)
{
	int count = 1;

	while (*s)
	{
		count++;
		s++;
	}

	s--;

	while (count--)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
