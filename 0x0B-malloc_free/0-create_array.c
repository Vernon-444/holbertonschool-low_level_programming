#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes array of char and initialized by specific char
 *
 * @size: size of the string
 * @c: spec char to initialize
 *
 * Return: Pointer to array, or NULL if it fails or if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
