#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - print from starting to 98
 *@n: starting to printing
 *
 * Return: result = 1 if letter is lower, else 0
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i <= 98; i++)
{
print(i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
if (n == 98)
{
print(n);
}
else
{
for (i = n; i >= 98; i--)
{
print(i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
