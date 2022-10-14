#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints all possible combinations of single-digit numbers.'
 *
 * Return: Always 0 (success)
 */
int main(void)
{int x;
int w;
int y = '\n';
for (x = '0'; x <= '9'; x++)
{
for (w = '0'; w <= '9'; w++)
{
if (x < w)
{putchar(x);
putchar(w);
if ((x != '8') || (w != '9'))
putchar(',');
putchar(' ');
}
}
}
putchar(y);
return (0);
}
