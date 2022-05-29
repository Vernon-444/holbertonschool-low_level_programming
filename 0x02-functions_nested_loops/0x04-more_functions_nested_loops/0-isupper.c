#include "main.h"
#include <stdio.h>

/**
 * _isupper - funct that checks for upper case character
 *
 * @c: variable used for comparison and value storing
 *
 * Return: 0 on  success
 */

int _isupper(int c)
{
	int c;

	if (c >= "A" && c =< "Z")
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
