#include "main.h"

/**
 * _isdigit - determines if it is a digit
 *
 * @c: digit used for comparision
 *
 * Return: 0 on success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
