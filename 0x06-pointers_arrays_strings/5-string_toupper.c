#include "main.h"

/**
 * string_toupper - changing lowercase to upper in a string
 * @s: the string
 *
 * Return: String with upper case
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}

	return (s);
}
