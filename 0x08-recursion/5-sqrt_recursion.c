#include "main.h"

int _sqrt_recursion(int n);
int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - get the natural square root of a number
 * @n: the number
 *
 * Return: -1 if the number has no natural square root
 * else the natural square root
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - calculate the root
 * @n: the number
 * @i: the number that may be the root
 *
 * Return: the root of the number if founded
 * else -1
 */

int find_sqrt(int n, int i)
{
	int x = i * i;

	if (x > n)
		return (-1);

	if (x == n)
		return (i);

	return (find_sqrt(n, i + 1));
}
