#include "main.h"

/**
 * _strspn - outputs length of prefix substring
 * @s: input string
 * @accept: bytes
 * Return: 0(success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
			{
				k++;
				break;
			}
			else if (accept[l + 1] == 0)
				return (k);
		}
		s++;
	}
	return (k);
}
