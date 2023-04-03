#include "main.h"

/**
 * _strpbrk - searches a string for sets of bytes
 *
 * @s: string to be searched
 * @accept: bytes to be looked for
 * Return: pointer to byte in string s
 */

char *_strpbrk(char *s, char *accept)
{
		int j;

		while (*s)
		{
			for (j = 0; accept[j]; j++)
			{
			if (*s == accept[j])
			return (s);
			}
		s++;
		}

	return ('\0');
}
