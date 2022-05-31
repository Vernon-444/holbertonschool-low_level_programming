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

	for (col < 10)
	{
		for (row < 15)
		{
			if (row > 9)
			{
				fd = row / 10;
				_putchar(fd);
			}
			ld = row % 10;
			_putchar(ld);
			_putchar(10);
		}
	}
}
