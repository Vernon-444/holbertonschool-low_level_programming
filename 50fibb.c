#include <stdio.h>

void main(void)
{
	int a = 1, b = 2, c, i;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%d, ", c);

		a = b;
		b = c;
	}
	printf("\n");
	return;
}
