#include "main.h"
/**
 * main - prints _putchar followed by a new line
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar("%d\n", c);
}
