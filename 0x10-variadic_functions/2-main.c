#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	print_strings(", ", 4, "Jay", "Django", "Duggy", "Connnnnnner");
	print_strings(NULL, 3, "Rock", "Paper", "Scissors");
	print_strings(", ", 3, "string 1", NULL, NULL);
	print_strings(", ", 0, "Jay", "Django");
	return (0);
}
