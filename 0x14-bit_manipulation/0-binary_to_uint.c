#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: converted num, or 0 if b is null or improper input
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;
	char *cp = strdup(b);

	if (cp == NULL)
	{
		return (0);
	}

	while (cp[len] != '\0')
	{
		len++;
	}

	for (len -= 1; len >= 0; len--)
	{
		if (cp[len] != '0' && cp[len] != '1')
			return (0);

		num += (cp[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
