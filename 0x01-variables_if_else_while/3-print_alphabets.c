#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'code to print lower case alpha and upper'
 *
 * Return: Always 0 (success)
 */
int main(void)
{char x;
char z;
char y = '\n';
for (x = 'a'; x <= 'z'; x++)
putchar(x);
for (z = 'A'; z <= 'Z'; z++)
putchar(z);
putchar(y);
return (0);
}
