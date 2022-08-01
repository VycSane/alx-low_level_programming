#include "dog.h"
/**
 *  init_dog - initialize a variable of type dog
 *  @d: address of a struct
 *  @name: the name of the dog
 *  @age: age of the dog
 *  @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
