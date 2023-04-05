#include "main.h"

/**
 * factorial - return factorial of given number
 * @n: integer to check for factorial
 * Return: 1 on success and -1 on error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /*Indicates error*/
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
