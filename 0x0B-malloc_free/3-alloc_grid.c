#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 *
 * Return: Double Pointer
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k, gr1;

	gr1 = 0;
	if (width <= 0 || height <= 0)
		return (0);

	a = malloc(height * sizeof(int *));
	if (a == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		*(a + i) = malloc(width * sizeof(int));
		if (*(a + i) == 0)
		{
			gr1 = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	if (gr1 == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(*(a + k));
		}
		free(a);
		}
		return (a);
}
