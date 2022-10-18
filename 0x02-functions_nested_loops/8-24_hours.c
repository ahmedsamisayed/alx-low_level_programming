#include "main.h"
/**
 * jack_bauer - list all mintues of the day
 *
 * Return: no return
 */
void jack_bauer(void)
{
int a, b, c, d, e;
for (a = 0; a <= 2; a++)
{
if (a < 2)
e = 9;
else
e = 3;
for (b = 0; b <= e; b++)
{
for (c = 0; c <= 5; c++)
{
for (d = 0; d <= 9; d++)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
}
}
}
}
}
