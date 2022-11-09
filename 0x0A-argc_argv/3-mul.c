#include <stdio.h>

/**
 * main - multiply two numbers
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	if (argv[0] == NULL || argv[1] == NULL)
	{
		printf("Error");
	}
	else
	{
		printf("%d\n", argv[0] * argv[1]);
	}

	return (0);
}
