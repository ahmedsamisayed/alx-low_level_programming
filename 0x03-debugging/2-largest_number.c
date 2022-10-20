#include "main.h"

/**
 * largest_number - determine biggest number
 * @a: the first number
 * @b: the second number
 * @c: the third number
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
