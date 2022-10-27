#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: the first String
 * @src: the second String
 *
 * Return: appended dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_length = 0;

	while (dest[i++])
		dest_length++;

	for (i = 0; src[i]; i++)
		dest[dest_length++] = src[i];

	return (dest);
}
