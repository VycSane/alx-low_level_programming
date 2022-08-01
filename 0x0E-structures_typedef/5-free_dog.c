#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog memory space
 * @d: dog struct type
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
}
