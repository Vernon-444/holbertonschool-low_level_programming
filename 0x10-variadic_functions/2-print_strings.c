#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 *
 * @separator: to be printed between str"
 * @n: num of elements
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	char *a;

	va_start(list, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n - 1; i++)
	{
		a = va_arg(list, char *);

		if (a)
		{
			printf("%s", a);
		}
		else
		{
			printf("(nil)");
		}
		printf("%s", separator);
	}
	a = va_arg(list, char *);

	if (a == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", a);
	}
}
