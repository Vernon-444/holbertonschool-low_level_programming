#include "main.h"
#include "4-pow_recursion.c"

/**
 * _sqrt_recursion - uses find_sqrt to get sqrt
 * find_sqrt - functin using recursion to calculate if sqrt of n is real
 * @n: int to be checked
 *
 * Return: sqrt in form of int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(0, n));
}

int find_sqrt(int prev, int find)
{
	if (prev * prev == find)
	{
		return (prev);
	}
	if (prev * prev > find)
	{
		return (-1);
	}
	return (find_sqrt(prev + 1, find));
}
