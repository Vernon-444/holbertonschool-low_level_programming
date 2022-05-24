#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints natural num from n to 98
 *
 * @n: var used to compair and count to 98
 *
 * Return: 0 on success
 */

void print_to_98(int n)
{
if (n >= 98)
{
for (n = n; n > 98; n--)
{
printf("%d, ", n);
}
}
else
{
for (n = n; n < 98; n++)
{
printf("%d, ", n);
}
}
}
