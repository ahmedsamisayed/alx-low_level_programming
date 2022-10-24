#include "main.h"

/**
 * swap_int - swap values between two pointers
 * @a: the first pointer
 * @b: the second pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tempror;

	tempror = *a;
	*a = *b;
	*b = tempror;
}
