#include "main.h"
/**
 * malloc_checked - allocates mem
 *
 * @b: unsigned int for mem alloc
 *
 * Return: 0 on success, 98 on fail
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
