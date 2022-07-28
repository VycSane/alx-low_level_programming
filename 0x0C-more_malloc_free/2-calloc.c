#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - allocates memory for an array all initialized to 0
 * @nmemb: number of elements
 * @size: size of bytes required to store each of the element
 *
 * Return: a pointer to thr allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *vp;
	size_t i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	vp = malloc(nmemb * size);
	if (vp == NULL)
		return (NULL);
	while (i < nmemb)
	{
		((char *)vp)[i] = 0;
		i++;
	}
	return (vp);
}
