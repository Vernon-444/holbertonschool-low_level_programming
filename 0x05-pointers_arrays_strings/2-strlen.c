#include "main.h"
/**
 * _strlen - determines length of a string
 *
 * @s: variable used for comparison
 *
 * return; 0 0n success
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
