#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2-dimensional array of integers.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: A pointer to the allocated grid or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check for invalid width or height */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the grid (array of int pointers) */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL); /* Memory allocation failed */

	/* Allocate memory for each row (array of ints) */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Memory allocation failed, free previously allocated rows */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
