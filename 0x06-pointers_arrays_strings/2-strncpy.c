#include "holberton.h"
/**
 * _strncpy - copies string src to dest
 *
 *@dest: destination of copeied string
 *@src: string to be copied
 *
 * Return: 0 0n success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0'
	}

	return (dest);
}
