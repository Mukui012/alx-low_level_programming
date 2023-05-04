#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts  binary to an unsigned int
 * @b: char string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, bin_num;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (bin_num = 1, i = 0, len--; len >= 0; len--, bin_num *= 2)
	{
		if (b[len] == '1')
			i += bin_num;
	}

	return (i);
}
