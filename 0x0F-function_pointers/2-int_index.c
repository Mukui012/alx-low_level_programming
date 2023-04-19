#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: number of elements
 * @cmp: pointer to function
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(array && cmp && size > 0))
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
