#include "main.h"

/**
 * print_line - pint straight line with n tall
 * @n: the tall of the line
 *
 * Return:no return
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
