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

	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
