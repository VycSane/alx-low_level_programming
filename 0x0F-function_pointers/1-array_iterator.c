#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: array arg
 * @size: the size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0)
		exit(98);
	if (array == NULL || action == NULL)
		exit(0);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
