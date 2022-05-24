#include "main.h"
/**
 * print_sign - tests numbers and generates output
 *
 * Return: returns value based on sign
 */

int print_sign(int n)
{
  if (n < 0)
    {
      _putchar('-');
      return (-1);
    }
  else if (n > 0)
    {
      _putchar('+');
      return (1);
    }
  _putchar('0');
  return (0);
}
