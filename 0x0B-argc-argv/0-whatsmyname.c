#include <stdio.h>

/**
 * main - prints program name
 *
 * @argc: num of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
