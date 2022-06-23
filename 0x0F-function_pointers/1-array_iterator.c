#include "function_pointers.h"

/**
 * array_iterator - excec func given as param on each elem of array
 * @array: ...
 * @size: size of array
 * @action: funct given
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
