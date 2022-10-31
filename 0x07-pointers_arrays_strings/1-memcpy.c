#include "main.h"

/**
 * _memcpy - copy memory areas
 * @dest: destination memory
 * @src: source memory
 * @n: bytes of memory area to copy
 *
 * Return: memory area copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
