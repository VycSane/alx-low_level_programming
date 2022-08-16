#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * pop_listint - pops the head node of the linked list
 * @head: the head node of the linked list
 *
 * Return: the popped off value, or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int tmp;

	if (*head == NULL)
		return (0);
	new = *head;
	tmp = (*head)->n;
	*head = (*head)->next;
	free(new);
	return (tmp);
}
