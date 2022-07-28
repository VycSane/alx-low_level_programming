#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to allocate;
 *
 * Return: a pointer to the allocated memory or NULL.
 */
void *malloc_checked(unsigned int b)
{
	void *np = malloc(b);

	if (np == NULL)
		exit(98);
	return (np);
}
