#include "holberton.h"
/**
 * _strncat - concatenates two strings
 *
 *@dest: string to be modiefied
 *@src: string to be concatenated
 *@n: int value byte cap
 *
 *Return: 0 on success
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (dest[i] != '\0')
	{
		dest_len++;
		i++;
	}

	for (i = 0; i < n && src[i]; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
