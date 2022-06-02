#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints every other char of a string
 *
 * @str: string to be modified
 *
 * Return: 0 on success
 */

void puts2(char *str)
{
	int i;
	int run = _strlen(str);

	for(i = 0; i <= run; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
