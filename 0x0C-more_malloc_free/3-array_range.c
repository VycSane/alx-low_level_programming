#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - creates an array of integers ranging from min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: return a pointer to the integer array or NULL
 */
int *array_range(int min, int max)
{
	int *ip, i = 0;

	if (min > max)
		return (NULL);
	ip = malloc((max - min + 1) * sizeof(int));
	if (ip == NULL)
		return (NULL);
	while (min <= max)
	{
		ip[i] = min;
		min++, i++;
	}
	return (ip);
}
