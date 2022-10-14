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
int y = '\n';
for (x = '0'; x <= '9'; x++)
{putchar(x);
if (x != '9')
putchar(',');
putchar(' ');
}
putchar(y);
return (0);
}
