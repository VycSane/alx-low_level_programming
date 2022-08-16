#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * add_nodeint - adds a node to the beginning of linked list
 * @head: the head node of the linked list
 * @n: the integer to store as valuee  in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
