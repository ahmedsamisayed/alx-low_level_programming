#include "main.h"

/**
 * _strlen - calculate a string length
 * @s: the string
 *
 * Return: c
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
		c++;
	return (c);
}
