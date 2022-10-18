#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabet in lowercase 10 times
 *
 * Return: no return value
 */
void print_alphabet_x10(void)
{
char x[] = "abcdefghijklmnopqrstuvwxyz";
int i;
int z;
for (z = 1; z <= 10; z++)
{
for (i = 0; i <= 25; i++)
{
_putchar(x[i]);
}
_putchar('\n');
}
}
