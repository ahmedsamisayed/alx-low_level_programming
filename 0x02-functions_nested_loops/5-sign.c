#include "main.h"
/**
 * print_sign - know the sign of number
 * @n: the number to its sign
 *
 * Return: no return value
 */
int print_sign(int n)
{
int x;
int z;
if (n > 0)
{
x = 1;
z = '+';
}
else
if (n == 0)
{
x = 0;
z = '0';
}
else
{
x = '/' - '0';
z = '-';
}
_putchar(z);
return (x);
}
