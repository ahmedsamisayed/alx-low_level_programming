#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the list
 * @str: the string to add in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int l;
	list_t n;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	s = strdup(str);

	if (s == NULL)
	{
		free(n);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	n->str = s;
	n->len = l;
	n->next = *head;

	*head = n;

	return (n);
}
