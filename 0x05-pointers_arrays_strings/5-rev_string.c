#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	char *y = *s;
	int z = x, h;

	for (x -= 1; x >= 0; x--)
	{
		for (h = 0; h <= z; h++)
		{
			s[x] = y[h];
		}
	}
}
