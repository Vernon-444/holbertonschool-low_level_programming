#include "main.h"

/**
 * _sqrt_recursion - uses find_sqrt to get sqrt
 *
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

/**
 * find_sqrt - calc sqrt
 *
 * @prev: incriment var
 * @find: n value
 *
 * Return: int if sqrt is real, -1 if not
 */

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
