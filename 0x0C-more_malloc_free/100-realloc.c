#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: old memory block
 * @old_size: size of the old memory block
 * @new_size: size of the new memory block
 *
 * Return: a pointer to the new memory block or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newmem;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	newmem = malloc(new_size);
	if (newmem == NULL)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	if (new_size > old_size)
		memcpy(newmem, ptr, old_size);
	else
		memcpy(newmem, ptr, new_size);
	free(ptr);
	ptr = NULL;
	return (newmem);
}
