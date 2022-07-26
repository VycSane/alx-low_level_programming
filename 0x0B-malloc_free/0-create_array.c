#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array.
 * @c: character that the array gets initialized with.
 *
 * Return: pointer to the array, or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *cp;
	size_t i = 0;

	if (size <= 0)
		return (NULL);
	cp = (char *)malloc(sizeof(char) * size);

	if (cp == NULL)
		return (NULL);
	while (i < size)
	{
		cp[i] = c;
		i++;
	}
	return (cp);
}
