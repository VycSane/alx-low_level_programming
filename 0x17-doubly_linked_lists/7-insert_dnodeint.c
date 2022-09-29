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
	dlistint_t *tmp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t *));

	if (h == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (*h);
	}
	while (tmp != NULL)
	{
		if (idx == 0)
		{
			add_dnodeint(h, n);
			break;
		}
		if (idx == pos)
		{
			new->next = tmp;
			tmp->prev->next = new;
			new->prev = tmp->prev;
			tmp->prev = new;
			break;
		}
		pos++;
		tmp = tmp->next;
	}
	if (idx == pos && tmp == NULL)
		add_dnodeint_end(h, n);
	return (*h);
}
