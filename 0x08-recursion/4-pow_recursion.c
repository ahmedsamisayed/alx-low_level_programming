#include "main.h"

/**
 * _pow_recursion - value of a 1 number raised to the power
 * of a 2 number.
 * @x: the first number
 * @y: the second number
 *
 * Return: -1 if y < 0
 * 1 if y = 0
 * raised power if y > 0
 */

int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	n = x * _pow_recursion(x, y - 1);

	return (n);
}
