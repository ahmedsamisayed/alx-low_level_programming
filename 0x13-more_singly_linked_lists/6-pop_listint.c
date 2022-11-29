#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: the listint_t list
 *
 * Return: if the linked list is empty return 0
 * else the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int r;

	if (*head == NULL)
		return (0);

	temp = *head;
	r = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (r);
}
