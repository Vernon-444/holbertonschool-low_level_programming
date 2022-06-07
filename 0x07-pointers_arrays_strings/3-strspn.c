#include "main.h"
/**
 * _strspn - gets len of prefix string
 *
 * @s: string to be checked
 * @accept: reference string
 *
 * Return: num of bytes in the initial segment of s of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				k++;
			}

			j++;
		}

		i++;
	}

	return (k);
}
