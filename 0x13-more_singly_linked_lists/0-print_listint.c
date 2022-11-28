#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the listint_t list
 *
 * Return: the number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
