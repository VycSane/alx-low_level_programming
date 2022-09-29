#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of the list
 * @head: starting node
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *tmp = *h;

	if (head == NULL || *head == NULL)
		return (-1);
	while (tmp != NULL)
	{
		if (idx == pos)
		{
			if (tmp->prev == NULL)
				tmp->next->prev = NULL;
			else
				tmp->prev->next = tmp->next;
			if (tmp->next == NULL)
				tmp->prev->next = NULL;
			else
				tmp->next->prev = tmp->prev;
			return (1);
		}
		pos++;
		tmp = tmp->next;
	}
	return (-1);
}
