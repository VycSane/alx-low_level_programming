#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of list
 * @head: starting node
 * @n: the value to add to the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *tmp = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			new_node->prev = tmp;
		tmp = tmp->next;
	}
	return (*head);
}
