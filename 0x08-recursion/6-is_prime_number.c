#include "main.h"

/**
 * is_prime_number - returns 1 if num is prime
 *
 * @n: num to check
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_fighter(n / 2, n));
}

/**
 * prime_fighter  - calculates if num is prime by factorial mod
 *
 * @i: decriement value
 * @n: num to be checked
 *
 * Return: value based on if num is prime
 */

int prime_fighter(int i, int n)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (prime_fighter(i - 1, n));
}
