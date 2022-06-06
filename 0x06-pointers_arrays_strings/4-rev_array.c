#inlcude "holberton.h"
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
	n = n - 1;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
	}
}
