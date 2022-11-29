#include "lists.h"

/**
 * free_listint - free the listint_t list
 * @head: the listint_t list
 */

void free_listint(listint_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
