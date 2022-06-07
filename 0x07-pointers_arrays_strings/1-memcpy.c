#include "main.h"
/**
 * memcpy - copies the memory area
 *
 * @dest: return destination
 * @src: string to be modiefied
 * @n: unsigned int for increment
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
