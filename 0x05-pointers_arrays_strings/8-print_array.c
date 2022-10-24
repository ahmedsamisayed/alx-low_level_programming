#include "main.h"
#include <stdio.h>

/**
 * print_array - print array elements.
 * @a: array
 * @n: number of elements
 *
 * Return: no return
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
