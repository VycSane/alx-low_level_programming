#include "lists.h"
#include <stddef.h>

/**
 * listint_len - gets the length of the linked list
 * @h: the head node of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
