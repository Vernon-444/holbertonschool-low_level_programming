#include "holberton.h"
/**
 * _strcmp - compares 2 strings
 *
 * @s1: string 1 for comparison
 * @s2: string 2 for comparison
 *
 * Return: 0 on success
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0; j = 0;

	while (s1[j] != '\0' && s2[j] != '0')
	{
		j++
	}

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
			i = j - 1;
		}
		i++;
	}
	if (s1[j] == s2[j])
	{
		return (0);
	}
	if (s1[j] != s2[j])
	{
		return (s1[j] - s2[j]
	}
}
