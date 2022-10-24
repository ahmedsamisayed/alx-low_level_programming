#include "main.h"

/**
 * print_rev - print string reversed
 * @s: the string
 *
 * Return: no return
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[c] != '\0')
	{
		x++;
	}
	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
