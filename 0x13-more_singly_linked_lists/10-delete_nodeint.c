#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - inserts node at the specified index
 * @head: the head node of the linked list
 * @index: the index
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *after;
	unsigned int count = 0;

	temp = *head;
	if (index == 0 && *head != NULL)
	{
		*head = temp->next;
		return (1);
	}
	else
	{
		while (temp != NULL)
		{
			if (count == (index - 1))
			{
				after = temp->next->next;
				temp->next = after;
				return (1);
			}
			temp = temp->next;
			count++;
		}
	}
	return (-1);
}
