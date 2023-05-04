#include "main.h"

/**
 * get_bit - gets value of a bit at a given index
 * @n: bit
 * @index: index of bit starting from 0
 *
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 64))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
