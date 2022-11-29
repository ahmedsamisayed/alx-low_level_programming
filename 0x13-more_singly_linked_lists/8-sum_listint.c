#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: the listint_t list
 *
 * Return: if the list is empty, return 0
 * esle the sum.
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
