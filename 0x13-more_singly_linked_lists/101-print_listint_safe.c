#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - prints the value of every node in a linked list
 * @head: head node of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
