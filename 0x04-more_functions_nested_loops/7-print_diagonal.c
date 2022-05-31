#include "main.h"
/**
 * print_diagonal - prints diagonal lines based on value inserted
 *
 * @n: num of lines
 *
 * return: 0 on success
 */

void print_diagonal(int n)
{
	int spacesnumber, linesnumber;

	if (n > 0)
		for (linesnumber = 1; linesnumber <= n; linesnumber++)
		{
			spacesnumber = (linesnumber - 1);
			while (spacesnumber > 0)
			{
				_putchar(32);
				spacesnumber--;
			}
			_putchar(92);
			_putchar(10);
		}
	else
		_putchar(10);
}
