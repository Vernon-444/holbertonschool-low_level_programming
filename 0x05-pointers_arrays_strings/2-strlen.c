#include "main.h"
/**
 * _strlen - determines length of a string
 *
 * @s: variable used for comparison
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s++)
	{
		count++;
	}
	return (count);
}
