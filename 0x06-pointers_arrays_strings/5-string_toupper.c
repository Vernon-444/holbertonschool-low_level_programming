#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters to upper
 *
 * Return: char string
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 113)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
