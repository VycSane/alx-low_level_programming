#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's name
 * @owner: dog's owner
 *
 * Return: a pointer to the new dog struct or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_cpy;
	char *owner_cpy;
	dog_t *dp = malloc(sizeof(dog_t *));

	if (name == NULL || owner == NULL)
		return (NULL);
	if (!age && age != 0)
		return (NULL);
	if (dp == NULL)
		return (NULL);
	name_cpy = malloc(sizeof(char) * strlen(name) + 1);
	if (name_cpy == NULL)
	{
		free(dp);
		return (NULL);
	}
	owner_cpy = malloc(sizeof(char) * strlen(owner) + 1);
	if (owner_cpy == NULL)
	{
		free(dp);
		free(name_cpy);
		return (NULL);
	}
	dp->name = name_cpy;
	dp->age = age;
	dp->owner = owner_cpy;
	return (dp);
}
