#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - determines if the output the last digit in 'n' is >5, or 0<n<6, or if is 0
 *
 * Return: 0 on success
 */
int main(void)
{
int n;
int lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
/* calculate last digit and use if statements to check */
lastdigit = n % 10;
if (5 < lastdigit)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
}
else if (0 < lastdigit && 6 > lastdigit)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
else if (0 == lastdigit)
{
printf("Last digit of %d is %d and is 0\n", n, lastdigit);
}
return (0);
}
