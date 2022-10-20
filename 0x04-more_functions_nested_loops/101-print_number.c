#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: the integer to print
 *
 * Return: no return
 */
void print_number(int n)
{
	unsigned int q = n;

	if (n < 0)
	{
		n *= -1;
		q = n;
		_putchar('-');
	}

	q /= 10;

	if (q != 0)
		print_number(q);

	_putchar((unsigned int) n % 10 + '0');

}
