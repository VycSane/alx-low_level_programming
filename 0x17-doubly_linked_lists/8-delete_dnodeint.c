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
	dlistint_t *tmp = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	while (tmp != NULL)
	{
		if (index == pos)
		{
			if (tmp->next == NULL)
			{
				if (tmp->prev != NULL)
					tmp->prev->next = NULL;
			}
			else
			{
				tmp->next->prev = tmp->prev;
			}
			if (tmp->prev == NULL)
			{
				if (tmp->next != NULL)
					tmp->next->prev = NULL;
				*head = tmp->next;
			}
			else
			{
				tmp->prev->next = tmp->next;
			}
			free(tmp);
			return (1);
		}
		pos++;
		tmp = tmp->next;
	}
	return (-1);
}
