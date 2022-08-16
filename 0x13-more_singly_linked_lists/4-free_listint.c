#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees allocated memory of list_t struct
 * @head: the head node of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
