#iclude "holberton.h"
/**
 * reverse_array - reverses content of an array of int
 *
 * @a: array to be modified
 * @n: num of elements in the array
 *
 * Return: 0 0n success
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	n = n - 1;
	
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
