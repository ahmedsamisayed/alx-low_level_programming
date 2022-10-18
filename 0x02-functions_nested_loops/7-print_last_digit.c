#include "main.h"
/**
 * print_last_digit - get the last digit of anumber
 *@a: the number given
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
int x;
if (a >= 0)
x = a % 10;
else
x = -(a % 10);
_putchar('0' + x);
return (x);
}
