#include "main.h"
/**
 * rev_string - prints a string in rev
 *
 * @s: string to be modified
 */

void rev_string(char *s)
{
	int i, j = 0;
	char a[500];

	while (a[i])
	{
	        a[i] = s[i];
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		s[i] = a[j];
		j++;
		i--;
	}
}
