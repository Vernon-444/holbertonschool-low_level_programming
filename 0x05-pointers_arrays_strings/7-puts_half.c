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
	int run = _strlen(str) - 1;
	int i = (_strlen(str) - 1) / 2;

	for (i = 0; i <= run; i ++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
