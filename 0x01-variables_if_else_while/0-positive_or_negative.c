#include <stdlib.h>
#include <time.h>
/* betty style doc for function main goes there */
/**
 * main - determines if the output of n is negative, positive, or equal to zero
 *
 * Return: 0 on success
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("is positive");
}
else if (n < 0)
{
printf("is negative");
}
else
{
printf("is zero");
}
return (0);
}
