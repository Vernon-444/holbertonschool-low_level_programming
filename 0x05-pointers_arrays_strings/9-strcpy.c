#include "main.h"
#include "2-strlen.c"

/**
 * *_strcpy - copies string and returns pointer to dest
 *
 * @dest: destination of completed copy
 * @src: string to be copied
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
