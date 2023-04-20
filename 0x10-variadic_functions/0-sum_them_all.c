#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argmnt;
	unsigned int i, sum = 0;

	if (!n)
	{
		return (0);
	}
	va_start(argmnt, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argmnt, int);

	va_end(argmnt);

	return (sum);
}
