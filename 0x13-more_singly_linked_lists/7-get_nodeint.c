#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t linked list.
 * @head: the listint_t list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
