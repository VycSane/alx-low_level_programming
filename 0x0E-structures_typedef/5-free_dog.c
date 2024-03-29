#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - frees dog memory space
 * @d: dog struct type
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		exit(0);
	}
	free(d->name);
	free(d->owner);
	free(d);
}
