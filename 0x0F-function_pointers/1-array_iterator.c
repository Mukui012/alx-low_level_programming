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
	unsigned int a;

	if (!action || !array)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
