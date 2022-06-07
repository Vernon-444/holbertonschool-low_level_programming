#include "holberton.h"
/**
 * leet - encodes a string into 1337 (leet)
 *
 *@c: string to be adjusted
 *
 * Return: 0 0n success
 */

char *leet(char *c)
{
	char duggy[] = "aAeEoOtTlL4433007711";
	int i, j;

	for (j = 0; c[j] != '\0'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (c[j] == duggy[i])
			{
				c[j] = duggy[i + 10];
			}

		}
	}
	return (c);
}
