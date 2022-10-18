#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check letter is it lower or upper
 * @c: the letter to check
 *
 * Return: result = 1 if letter is lower, else 0
 */
int _isalpha(int c)
{
int x;
int result;
x = isalpha(c);
if (x != 0)
result = 1;
else
result = 0;
return (result);
}
