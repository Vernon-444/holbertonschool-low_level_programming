#include "main.h"
/**
 * factorial - calculates the factorial of int n
 * main - uses recursion with factorial to output
 *
 * @n: int to be modified
 *
 * Return: result of factorial (int)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}


			return (1);
}
