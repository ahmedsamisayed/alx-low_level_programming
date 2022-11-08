#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * else a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	int **a, i, j;

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);

			free(a);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}

	return (a);
}
