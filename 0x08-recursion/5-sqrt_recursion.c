#include "main.h"

/**
 * sqrt1 - finds root
 * @x: number
 * @y: iterates 1 to n
 * Return: 1 or -1(error)
 */

int sqrt1(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y * y > x)
		return (-1);
	return (sqrt1(x, y + 1));
}

/**
 * _sqrt_recursion - return natural root
 * @n: integer number
 *
 * Return: 1 or -1(error)
 */

int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}
