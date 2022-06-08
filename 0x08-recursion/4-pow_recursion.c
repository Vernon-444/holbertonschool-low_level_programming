/**
 * _pow_recursion - returns value x raised to power y
 *
 *@x: value to be modified
 *@y: exponential value
 *
 * Return: x to the power of y as int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
