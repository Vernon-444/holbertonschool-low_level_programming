#include "main.h"

/**
 * print_square - prints a square based on num input
 *
 * @size: determines rows and colums of square
 *
 * return: 0 on output
 */

void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (i = 0; i <= size; i++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
	
}
