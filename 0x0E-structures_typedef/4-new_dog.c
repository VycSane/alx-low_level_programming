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
	dog_t *dp = malloc(sizeof(dog_t *));

	if (dp == NULL)
		return (NULL);
	dp->name = name;
	dp->age = age;
	dp->owner = owner;
	return (dp);
}
