#include "lists.h"

/**
 * print_dlistint - prints the values of a doubly linked-list
 * @h: starting node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmp = h;

	if (tmp == NULL)
		return (count);
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
