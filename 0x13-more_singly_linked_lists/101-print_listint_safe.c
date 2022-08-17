#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - prints the value of every node in a linked list
 * @head: head node of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
