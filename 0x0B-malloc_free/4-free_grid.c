#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created with malloc
 * @grid: double pointer to 2d array
 * @height: rows in array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
