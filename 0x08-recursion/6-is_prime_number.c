#include "main.h"

int is_prime_number(int n);
int find_prime(int n, int i);

/**
 * is_prime_number - determine if n is prime or not
 * @n: the number
 *
 * Return: 1 if n is prime, else 0
 */

int is_prime_number(int n)
{
	return (find_prime(n, 2));
}

/**
 * find_prime - find out the prime
 * @n: the number
 * @i: possiblities of multiplies numbers
 *
 * Return: 1 if n is prime, else 0
 */

int find_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0)
		return (0);

	if (i == n / 2)
		return (1);

	return (find_prime(n, i + 1));

}
