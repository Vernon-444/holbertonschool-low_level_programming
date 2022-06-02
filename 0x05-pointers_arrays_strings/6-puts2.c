#include "main.h"

/**
 * puts2 - prints every other char of a string
 *
 * @str: string to be modified
 *
 * Return: 0 on success
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar(10);
}
