#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Mutiply result between a and b
 */
void print_numbers(void)
{
	int x;

	for(x = 0; x <= 9; x++)
		_putchar(x + '0');
	_putchar('\n');
}
