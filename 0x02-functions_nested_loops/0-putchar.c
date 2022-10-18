#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: code to print _putchar
 *
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: Always 0 (success)
 */
int _putchar(char c);
int main(void)
{char x[] = "_putchar";
int i;
for (i = 0; i <= 7; i++)
_putchar(x[i]);
_putchar('\n');
return (0);
}
