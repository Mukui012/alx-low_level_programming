#include "search_algos.h"
#include <math.h>

/**
 * binary_search - function that searches using Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t n, mid, a, i;

	n = 0;
	a = size - 1;
	if (array == NULL)
		return (-1);
	while (n <= a)
	{
		printf("Searching in array: ");
		for (i = n; i <= a; i++)
		{
			if (i != a)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[a]);
			}
		}
		mid = floor((n + a) / 2);
		if (array[mid] < value)
		{
			n = mid + 1;
		}
		else if (array[mid] > value)
		{
			a = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
