#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 *
 * @a: 2d array of integers
 * @size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		sum2 += a[(size - 1) * (j + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
