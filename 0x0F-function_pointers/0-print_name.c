#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: name given
 * @f: pointer to funct
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
