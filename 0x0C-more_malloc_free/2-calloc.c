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
	unsigned int i = 0;
	char s;

	if (nmemb == 0 || nmemb == 0)
	{
		return (NULL);
	}

	s = malloc(nmemb * size);

	if (s == NULL)
	{
		return (NULL);
	}
	
	return(s);
