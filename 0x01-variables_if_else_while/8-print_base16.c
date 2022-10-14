#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'rints all the numbers of base 16 in lowercase'
 *
 * Return: Always 0 (success)
 */
int main(void)
{char x;
char z;
char y = '\n';
for (x = '0'; x <= '9'; x++)
putchar(x);
for (z = 'a'; z <= 'f'; z++)
putchar(z);
putchar(y);
return (0);
}
