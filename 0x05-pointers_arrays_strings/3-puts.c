#include "main.h"

/**
 * _puts - print string out
 * @str: the string
 *
 * Return: no return
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		putchar(*str);
	_putchar('\n');
}
