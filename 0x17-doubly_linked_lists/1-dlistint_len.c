#include "lists.h"

/**
 * dlistint_len - calculates the length of a doubly linked-list
 * @h: starting node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmp = h;

	if (tmp == NULL)
		return (count);
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
