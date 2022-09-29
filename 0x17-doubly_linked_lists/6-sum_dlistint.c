#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the nodes' value
 * @head: starting node
 * Return: the number of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	size_t result = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		result += tmp->n;
		tmp = tmp->next;
	}
	return (result);
}
