#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from starting to 98
 *@n: starting to printing
 *
 * Return: result = 1 if letter is lower, else 0
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
