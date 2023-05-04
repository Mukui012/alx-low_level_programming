#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the bit
 * @index: index of the bit starting from 0
 *
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 64))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
