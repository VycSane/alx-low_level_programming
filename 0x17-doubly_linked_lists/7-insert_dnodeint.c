#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at the specified index
 * @h: starting node
 * @idx: the index
 * @n: the new value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;
	dlistint_t *tmp = *h, *new = NULL;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	if (*h == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (*h);
	}
	while (tmp != NULL)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (idx == pos)
		{
			new->n = n;
			new->next = tmp;
			tmp->prev->next = new;
			new->prev = tmp->prev;
			tmp->prev = new;
			return (*head);
		}
		pos++;
		tmp = tmp->next;
	}
	if (idx == pos && tmp == NULL)
		return (add_dnodeint_end(h, n));
	free(new);
	return (NULL);
}
