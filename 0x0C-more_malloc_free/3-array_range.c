#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		ptr[a] = min;

	return (ptr);
}
