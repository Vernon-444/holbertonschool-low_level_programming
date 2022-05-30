#include "main.h"

/**
 * _isupper - determines if character is upper or lower case
 *
 * @c: variable used for comparison
 *
 * Return: 1 on uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int c;

	_putchar(c);
	_putchar(':');
	_putchar(' ');

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
