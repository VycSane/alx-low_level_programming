#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * print_dog - prints a dog
 * @d: the dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	printf("Name: %s\n", (d->name) ? (d->name) : ("(nil)"));
	if (!d->age && d->age != 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", (d->age));
	printf("Owner: %s\n", (d->owner) ? (d->owner) : ("(nil)"));
}
