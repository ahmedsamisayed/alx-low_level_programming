#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: source string
 * @accept: accepted string
 *
 * Return: if bytes is found
 * a pointer to the byte in s that matches one of the bytes in accept
 * else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b = 0;

	while (s[a])
	{
		while (accept[b])
		{
			if (accept[b] == s[a])
				return (s += a);

			b++;
		}

		a++;
	}

	return ('\0');
}
