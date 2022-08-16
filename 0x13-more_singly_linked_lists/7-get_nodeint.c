#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - gets node at the specified index
 * @head: the head node of the linked list
 * @index: the index
 *
 * Return: the node at the specified index, or NULL if it failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		if (index == 0)
			return (temp);
		temp = temp->next;
		index--;
	}
	return (NULL);
}
