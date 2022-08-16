#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - gets the sum of all the nodes value in the linked list
 * @head: the head node of the linked list
 *
 * Return: the sum of all the nodes value in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
