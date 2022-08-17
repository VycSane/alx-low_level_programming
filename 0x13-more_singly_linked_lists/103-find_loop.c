#include "lists.h"
#include <stddef.h>

/**
 * find_listint_loop - finds loop in the linked list
 * @head: the head node of the linked list
 *
 * Return: The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (head != NULL && head->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			return (slow);
	}
	return (NULL);
}
