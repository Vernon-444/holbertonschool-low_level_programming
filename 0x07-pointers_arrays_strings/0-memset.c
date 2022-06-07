#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: string to be modified
 * @b: constant byte
 * @n: int to be assigned, limit of byte fill
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}

	return (s);
}
