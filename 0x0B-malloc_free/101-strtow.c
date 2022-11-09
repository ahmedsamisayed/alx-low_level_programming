#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: If failed, str == NULL or str == "" - NULL
 * else splited string
 */

char **strtow(char *str)
{
	int i, j = 0, l = 0;
	char *a;

	if (str == NULL || str == " ")
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != " ")
		{
			l++;
		}
	}

	a = malloc(sizeof(char) * l);

	if (a == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != " ")
		{
			a[j++] = str[i];

			if (str[i + 1] == " " || str[i + 1] == '\0')
			{
				a[j++] = '\n';
			}
		}
	}

	return (*a);
}
