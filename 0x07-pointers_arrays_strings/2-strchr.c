#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: string to be modified
 * @c: char to be searched for
 *
 * Return: pointer to furst occurance of c, or null if not found
 */

char *_strchr(char *s, char c)
{
	int i, j;
	int slen = 0;

	while (s[j] != '\0')
	{
		slen++;
		j++;
	}

	for (i = 0; i <= slen; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
			i = slen + 1;
		}
	}
		return ('\0');
}
