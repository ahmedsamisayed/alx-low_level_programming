#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to copy
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 * else a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i, l = 0;
	char *d;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	d = malloc(sizeof(char) * (l + 1));

	if (d == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		d[i] = str[i];

	d[l] = '\0';

	return (d);
}
