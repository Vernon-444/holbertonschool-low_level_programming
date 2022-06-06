#include "holberton.h"
#include "../0x05-pointers_arrays_strings/main.h"
#include "../0x05-pointers_arrays_strings/2-strlen.c"
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
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i]; i++)
		{
			dest[dest_len + i] = src[i];
		}
	     dest[dest_len + i] = '\0';

	     return dest;
}
