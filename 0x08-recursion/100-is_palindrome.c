#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - checks to see if string is palendrome
 *
 * @s: string to be compared
 *
 * Return: 1 if is, 0 if not palendrome
 */

int whos_your_douggy(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + whos_your_douggy(s + 1));
}

int is_palindrome(char *s)
{
	printf("%d", whos_your_douggy(s));
	return (0);
}
