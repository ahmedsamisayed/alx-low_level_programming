#include "lists.h"

/**
 * listint_len - return the number of elements in a linked listint_t list.
 * @h: the listint_t list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
