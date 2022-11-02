#include "main.h"

/**
 * factorial - calculate factorial of a number
 * @n: the number
 *
 * Return: factorial of a number
 */

int factorial(int n)
{
	int x;

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	x = n * factorial(n - 1);

	return (x);
}
