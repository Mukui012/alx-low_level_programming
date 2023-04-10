#include "main.h"

/**
 * _atoi - converts string to int
 * @s: input string
 * Return: integer
 */

int _atoi(char *s)
{
	int num1 = 1, x = 0;
	unsigned int y = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != 0)
	{
		if (s[x] == '-')
			num1 *= -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != 0))
	{
		y = (y * 10) + (s[x] - '0');
		x++;
	}
	y *= num1;
	return (y);
}
