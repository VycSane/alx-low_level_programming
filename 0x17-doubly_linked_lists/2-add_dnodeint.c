#include "lists.h"

/**
 * add_dnodeint - calculates the length of a doubly linked-list
 * @head: starting node
 * @n: the value to add to the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	head = &new_node;
	return (*head);
}
