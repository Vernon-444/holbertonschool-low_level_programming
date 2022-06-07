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
	int i;
	int j = n;

	for (i = 0; i <= j; i++)
	{
		s[i] = b;
	}
	return (s);
}
