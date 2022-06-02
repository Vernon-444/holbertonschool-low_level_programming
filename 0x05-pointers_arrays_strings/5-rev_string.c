#include "main.h"
/**
 * print_rev - prints a string to stdout
 *
 * @s: string to be modified
 */

void rev_string(char *s)
{
        int i, j;
	char a[500];
	i = 0;
	j = 0;
	while (*(s + i))
	{
		*(a + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(a + j);
		j++;
		i--;
	}
}
