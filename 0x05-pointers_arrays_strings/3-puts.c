#include "main.h"
/**
 * _puts - prints a string to stdout
 *
 * @str: increment char
 *
 * Return: 0 on success
 */

void _puts(char *str)
{
	int i = 0;

	while (str++)
	{
		_putchar(*str + 65);
		i++;
	}
	return (0);
}
