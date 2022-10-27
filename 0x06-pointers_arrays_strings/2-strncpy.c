#include "main.h"

/**
 * _strncpy - copy String to another with number of bytes
 * @dest: the first String
 * @src: the second String
 * @n: the number of bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_length = 0;

	while (src[i++])
		src_length++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_length; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
