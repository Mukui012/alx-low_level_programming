#include "function_pointers.h"

/**
 * array_iterator - executing a func on each array
 * @array: array
 * @size: number of elements
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
