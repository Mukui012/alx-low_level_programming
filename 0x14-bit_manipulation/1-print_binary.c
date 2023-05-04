#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int bin_num;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = n, bin_num = 0; (i >>= 1) > 0; bin_num++)
		;

	for (; bin_num >= 0; bin_num--)
	{
		if ((n >> bin_num) & 1)
			printf("1");
		else
			printf("0");
	}
}
