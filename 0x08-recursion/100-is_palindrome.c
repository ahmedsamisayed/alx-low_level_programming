#include "main.h"

int is_palindrome(char *s);
int check_palindrome(char *s, int len, int i);
int find_strlen(char *s);

/**
 * is_palindrome - check if the string is palindrome
 * @s: the string
 *
 * Return: 1 if s is palindrome, else 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int l = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, l, i));
}

/**
 * check_palindrome - check the chars of the string
 * @s: the string
 * @len: length of the string
 * @i: index of the char
 *
 * Return: 1 if s is palindrome, else 0
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);

}

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}
