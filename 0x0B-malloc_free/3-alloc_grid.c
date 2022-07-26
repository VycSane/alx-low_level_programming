#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - creates a 2D grid (array)
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2D array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **ipp, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ipp = (int **)malloc(sizeof(int *) * height);
	if (ipp == NULL)
		return (NULL);
	while (i < height)
	{
		ipp[i] = (int *)malloc(sizeof(int) * width);
		if (ipp[i] == NULL)
			return (NULL);
		j = 0;
		while (j < width)
		{
			ipp[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ipp);
}
