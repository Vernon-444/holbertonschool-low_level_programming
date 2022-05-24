#include "main.h"
/**
 * _isalpha - checks string for any character
 *
 * @c: variable used in loop to compare if char is a character
 *
 * Return: 1 or 0 depending on case from 'c'
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
