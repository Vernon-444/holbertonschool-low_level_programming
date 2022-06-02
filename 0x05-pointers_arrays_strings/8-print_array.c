#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of n variables
 *
 * @n: iteration counter
 * @a: array to modify
 *
 * Return: 0 on success
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{

		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n]);
	}
	printf("\n");
}
