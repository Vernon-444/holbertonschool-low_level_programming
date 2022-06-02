#include "main.h"
/**
 * print_rev - prints a string to stdout
 *
 * @s: string to be modified
 */

void rev_string(char *s)
{
	int len, index = 0;
	char tmp;

	while (s[index++])
	{
		len++;
	}

	for (index = len - 1; index >= len / 2; index --)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
