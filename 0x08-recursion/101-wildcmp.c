#include "main.h"

int wildcmp(char *s1, char *s2);
int str_len_no_wilds(char *s);
void ignore_wilds(char **w);
char *char_match(char *a, char *b);

/**
 * wildcmp - compare two strings if they can be identical
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if the strings can be considered identical
 * othrwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		ignore_wilds(&s2);
		s2 = char_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}

/**
 * str_len_no_wilds - Returns the length of a string
 * ignoring wildcard characters.
 * @s: the string
 *
 * Return: length
 */

int str_len_no_wilds(char *s)
{
	int len = 0, index = 0;

	if (*(s + index))
	{
		if (*s != '*')
			len++;

		index++;
		len += str_len_no_wilds(s + index);
	}

	return (len);
}

/**
 * ignore_wilds - Iterates through a string located at a wildcard
 * until it points to a non wildcard char
 * @w: the string
 *
 * Return: no thing
 */

void ignore_wilds(char **w)
{
	if (**w == '*')
	{
		(*w)++;
		ignore_wilds(w);
	}
}

/**
 * char_match - Checks if a string str matches the postfix of
 * another string potentially containing wildcards.
 * @a: the string
 * @b: the postfix
 *
 * Return: If str and postfix are identical - a pointer to the null byte
 * located at the end of postfix.
 * Otherwise - a pointer to the first unmatched character in postfix.
 */

char *char_match(char *a, char *b)
{
	int str_len = str_len_no_wilds(a) - 1;
	int postfix_len = str_len_no_wilds(b) - 1;

	if (*b == '*')
		ignore_wilds(&b);

	if (*(a + str_len - postfix_len) == *b && *b != '\0')
	{
		b++;
		return (char_match(a, b));
	}

	return (b);
}
