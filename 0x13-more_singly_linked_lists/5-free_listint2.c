#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees allocated memory of list_t struct
 * @head: the head node of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
