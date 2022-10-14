#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'code to print lower alpha with ecxeption'
 *
 * Return: Always 0 (success)
 */
int main(void)
{char x;
char y = '\n';
for (x = 'a'; x <= 'z'; x++)
if ((x != 'q') && (x != 'e'))
{putchar(x);
}
putchar(y);
return (0);
}
