#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints all possible combinations of 3-digit numbers.'
 *
 * Return: Always 0 (success)
 */
int main(void)
{int x;
int w;
int q;
int y = '\n';
for (x = '0'; x <= '9'; x++)
{
for (w = '0'; w <= '9'; w++)
{
for (q = '0'; q <= '9'; q++)
{
if ((x < w) && (w < q))
{putchar(x);
putchar(w);
putchar(q);
if ((x != '7') || (w != '8') || (q != '9'))
{putchar(',');
putchar(' ');
}
}
}
}
}
putchar(y);
return (0);
}
