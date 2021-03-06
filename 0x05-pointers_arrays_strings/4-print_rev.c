#include "main.h"
/**
 * print_rev - prints a string to stdout
 *
 * @s: increment char
 */

void print_rev(char *s)
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
