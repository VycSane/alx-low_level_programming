#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - frees a 2D grid (array)
 * @grid: the 2D grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		grid[i] = NULL;
		i++;
	}
	free(grid);
	grid = NULL;
}
