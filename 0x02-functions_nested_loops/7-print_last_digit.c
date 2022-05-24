#include "main.h"
/**
 * print_last_digit - prints last digit :)
 *
 * @n: variable to test
 *
 * Return: 0 on success
 */

int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = n * -1;
}
_putchar(n + 48);
return (n);
}
