#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int bit = 0;

	i = n ^ m;

	while (i)
	{
		bit++;
		i &= (i - 1);
	}

	return (bit);
}
