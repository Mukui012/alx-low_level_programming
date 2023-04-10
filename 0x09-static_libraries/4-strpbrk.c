#include "main.h"

/**
 * _strpbrk - searches string for bytes
 * @s: string
 * @accept: string
 * Return: 0(success)
 */

char *_strpbrk(char *s, char *accept)
{
	int m, n;

	for (m = 0; *(s + m) != 0; m++)
	{
		for (n = 0; *(accept + n) != '\0'; n++)
		{
			if (*(s + m) == *(accept + n))
				return (s + m);
		}
	}
	return (0);
}
