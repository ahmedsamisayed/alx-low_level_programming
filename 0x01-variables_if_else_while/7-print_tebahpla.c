#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'code to print lower case alpha with reverse'
 *
 * Return: Always 0 (success)
 */
int main(void)
{char x;
char y = '\n';
for (x = 'z'; x >= 'a'; x--)
putchar(x);
putchar(y);
return (0);
}
