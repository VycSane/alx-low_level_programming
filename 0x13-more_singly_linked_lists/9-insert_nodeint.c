#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts node at the specified index
 * @head: the head node of the linked list
 * @idx: the index
 * @n: the int value to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *after;
	unsigned int count = 0;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	else
	{
		while (temp != NULL)
		{
			if (count == (idx - 1))
			{
				after = temp->next;
				temp->next = new;
				new->next = after;
				return (new);
			}
			temp = temp->next;
			count++;
		}
	}
	free(new);
	return (NULL);
}
