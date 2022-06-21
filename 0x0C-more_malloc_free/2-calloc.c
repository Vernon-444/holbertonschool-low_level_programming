#include "main.h"
/**
 * _calloc - allocates mem for an array using malloc
 *
 * @nmemb: array given
 * @size: byte size of array
 *
 * Return: pointer to alloc mem, null if nmemb is 0 or fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, k = 0;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	k = nmemb * size;
	s = malloc(k);

	if (s == NULL)
	{
		return (NULL);
	}

	while (i < k)
	{
		s[i] = 0;
		i++;
	}

	return(s);
