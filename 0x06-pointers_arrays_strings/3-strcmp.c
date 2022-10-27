#include "main.h"

/**
 * _strcmp - compare between two strings
 * @s1: the first String
 * @s2: the second String
 *
 * Return:If s1 < s2, the negative difference of the first unmatched characters
 *         0 if s1 == s2,
 *        If s1 > s2, the positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
