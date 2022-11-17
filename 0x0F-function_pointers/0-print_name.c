#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the name to print
 * @f: pointer of function to call back
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
