#include "main.h"
/**
 * swap_int - swaps values of 2 ints
 *
 * @a: first value
 * @b: second value
 *
 * return: 0 on success
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = &b;
	&b = &a;
	&a = temp;
}
