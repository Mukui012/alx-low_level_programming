#include "main.h"

/**
 * x_prime - evaluates through recursion
 * @i: integer
 * @j: number
 *
 * Return: 1(success), -1(error)
 */

int x_prime(int i, int j)
{
	if (i == j)
		return (1);
	if (i % j == 0)
		return (0);
	return (x_prime(i, j + 1));
}

/**
 * is_prime_number - check for prime number
 * @n: integer
 *
 * Return: 1(success), -1(error)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (x_prime(n, 2));
}
