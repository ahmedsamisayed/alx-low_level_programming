#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: source string
 * @c: the character to find
 *
 * Return: if c is found, pointer to first match
 * else: NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s += i);
	}

	return ('\0');
}
