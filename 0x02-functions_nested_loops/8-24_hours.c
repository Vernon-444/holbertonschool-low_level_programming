/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0 0n success
 */

void jack_bauer(void)
{
int m = 0;
int h = 0;
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar('0' + h / 10);
_putchar('0' + h % 10);
_putchar(':');
_putchar('0' + m / 10);
_putchar('0' + m % 10);
_putchar('\n');
}
}
}
