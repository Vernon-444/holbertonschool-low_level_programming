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
	int i;

	whlie (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
		return ('\0');
}
