#include "lists.h"

/**
 * get_dnodeint_at_index - gets node value at the specified index
 * @head: starting node
 * @index: the node's position
 * Return: the node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t pos = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		if (pos == index)
			return (tmp);
		pos++;
		tmp = tmp->next;
	}
	return (NULL);
}
