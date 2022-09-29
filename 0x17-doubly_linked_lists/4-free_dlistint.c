#include "lists.h"

/**
 * free_dlistint - frees all allocated memory to a doubly linked-list
 * @head: starting node
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head->prev);
		if (head->next == NULL)
		{
			free(head->next);
			break;
		}
		head = head->next;
	}
}
