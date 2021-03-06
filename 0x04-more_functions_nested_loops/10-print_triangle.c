#include "main.h"
/**
 * print_triangle - prints triangle with base of int size
 *
 * @size: determines size of triangle
 */

void print_triangle(int size)
{
	int stage;
	int dad, baby;

	stage = size - 1;

	if (size > 0)
	{
		for (dad = 1; dad <= size; dad++)
		{
			for (baby = 1; baby <= size; baby++)
			{
				if (baby <= stage)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			stage--;
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
