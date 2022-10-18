#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - get the last digit of anumber
 *@a: the number given
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
int y, x;
y = abs(a);
x = y % 10;
_putchar('0' + x);
return (x);
}
