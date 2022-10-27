#include "main.h"

/**
 * _strcat - appends String to another with number of bytes
 * @dest: the first String
 * @src: the second String
 * @n: the number of bytes
 *
 * Return: appended dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_length = 0;

	while (dest[i++])
		dest_length++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_length++] = src[i];

	return (dest);
}
