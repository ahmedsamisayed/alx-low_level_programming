#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the list
 * @str: the string to add in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int l;
	list_t *n, *la;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	s = strdup(str);

	if (str == NULL)
	{
		free(n);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	n->str = s;
	n->len = l;
	n->next = NULL;

	if (*head == NULL)
		*head = n;

	else
	{
		la = *head;
		while (la->next != NULL)
			la = la->next;
		la->next = n;
	}

	return (*head);
}
