#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 *
 * @str: string to be modified
 *
 * Return: 0 on success
 */

void puts_half(char *str)
{
	int run = _strlen(str);
	int i = (_strlen(str) / 2);

	while (i <= run)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
