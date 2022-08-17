#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverses a linked list
 * @head: the head node of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *after = NULL;

	if (*head != NULL)
	{
		prev = *head;
		after = (*head)->next;
		*head = after;
		prev->next = NULL;
		while (*head != NULL)
		{
			*head = (*head)->next;
			after->next = prev;
			prev = after;
			after = *head;
		}
		*head = prev;
	}
	return (*head);
}
