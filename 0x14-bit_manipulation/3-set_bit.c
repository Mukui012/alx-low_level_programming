#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number
 * @index: index of bit starting from 0
 * Return: 1 if it worked, -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > 32)
		return (-1);

	for (a = 1; index > 0; index--, a *= 2)
		;
	*n += a;

	return (1);
}
