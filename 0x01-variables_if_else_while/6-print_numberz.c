#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints all single digit numbers of base 10 starting from 0'
 *
 * Return: Always 0 (success)
 */
int main(void)
{int x;
int y = '\n';
for (x = '0'; x <= '9'; x++)
putchar(x);
putchar(y);
return (0);
}
