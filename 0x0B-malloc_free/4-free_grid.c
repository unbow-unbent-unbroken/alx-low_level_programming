#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2-dimensional grid created by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height (number of rows) of the grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		/* Free each row (array of ints) */
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		/* Free the array of int pointers (grid itself) */
		free(grid);
	}
}
