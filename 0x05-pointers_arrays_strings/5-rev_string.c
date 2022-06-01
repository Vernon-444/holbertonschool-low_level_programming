#include "main.h"
/**
 * print_rev - prints a string to stdout
 *
 * @s: increment char
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
	count = count / 2;

	while (count)
	{
		_putchar(*s);
		s--;
		count--;
	}
	_putchar(10);
}
