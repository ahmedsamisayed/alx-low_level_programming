#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function to apply math functions
 * @argc: number of arguments passed to main
 * @argv: array of arguments
 *
 * Return: always 0 success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	o = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(o) == NULL || o[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*o == '/' && n2 == 0) ||
	(*o == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(o)(n1, n2));

	return (0);
}
