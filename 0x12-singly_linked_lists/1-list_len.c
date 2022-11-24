#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list.
 * @h: the list_t list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t a;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
