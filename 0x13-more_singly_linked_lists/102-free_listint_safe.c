#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees allocated memory of list_t struct
 * @h: the head node of the linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count = 0;

	while (*h != NULL)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}
	*h = NULL;
	return (count);
}
