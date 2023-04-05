#include "main.h"

/**
 * _pow_recursion - raises x to power y
 * @x: integer number
 * @y: power integer
 * Return: On error -1, On success return power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
