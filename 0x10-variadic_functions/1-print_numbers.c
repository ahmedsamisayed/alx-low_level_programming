#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: The number of paramters passed to the function.
 * @...: A variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list n;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(n, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(n);

}
