#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in mem, cpy of given str
 *
 * @str: string given
 *
 * Return: pointer to duplicated str, NULL if not enough mem avail
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str)
	{
		len++;
	}

	a = malloc((len + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		a[i] = str[i];
	}

	a[len] = '\0';

	return (a);
}
