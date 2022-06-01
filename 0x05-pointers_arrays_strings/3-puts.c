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
	while (*str++)
	{
		_putchar(*str);
	}
	_putchar(10);
	return (0);
}
