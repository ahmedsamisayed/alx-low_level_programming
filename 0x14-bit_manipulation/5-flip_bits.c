#include "main.h"

/**
 * flip_bits - know number of bits you would need to flip to get from
 * one number to another
 *@n: the first number.
 *@m: the second number.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bits = 0;

	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}

	return (bits);
}
