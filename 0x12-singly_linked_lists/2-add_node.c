#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds a node to the beginning of linked list
 * @head: the head node of the linked list
 * @str: the string to store as valuee  in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
