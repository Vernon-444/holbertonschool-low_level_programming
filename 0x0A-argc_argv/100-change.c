#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min num of coins used to make change for any amount of money
 *
 * @argc: num of arguments
 * @argv: arguments given
 *
 * Return: 0 on success, 1 on error
 */


int main(int argc, char argv)
{
	int change = atoi(argv[1]);
	int coincount = 0;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}

	while (change > 0)
	{
		if (change >= 25)
		{
			change -= 25;
			cointcount++;
		}
		if (change >= 10 && change < 25)
		{
			change -= 10;
			coincount++;
		}
		if (change >= 5 && change < 10)
		{
			change -= 5;
			coincount++;
		}
		if (change >= 2 && change < 5)
		{
			change -= 2;
			coincount++;
		}
		else
		{
			change--;
			coincount++;
		}

	}

	printf("%d", coincount);
	return (0);
}
