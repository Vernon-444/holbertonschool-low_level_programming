#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a param on each array elem
 *
 * @size: size of array
 * @array: array givenj
 * @action: pointer to action to be performed
 * @int: ...
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
