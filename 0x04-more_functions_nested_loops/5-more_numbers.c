#include "main.h"

/**
 * more_numbers - prints numbers
 *
 *
 *
 * Return: o on impact
 */

void more_numbers(void)
{
	int row = 0;
	int col = 0;
	int fd, ld;

	while (col < 10)
	{
		while (row < 15)
		{
			if (row > 9)
			{
				fd = row / 10;
				_putchar(fd);
			}
			ld = row % 10;
			_putchar(ld);
			_putchar(10);
			row++;
		}
		row = 0;
		col++;
	}
}
