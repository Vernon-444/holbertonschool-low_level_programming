#include "variadic_functions.h"

/**
 * print_numbers - yup.
 *
 * @separator: - string to be printed betweeen each num
 * @n: number of args given
 *
 * Return: noneya
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	if (n == 0)
	{
		return;
	}

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(list, int), separator);
	}
	printf("%d\n", va_arg(list, int));

	va_end(list);
}
