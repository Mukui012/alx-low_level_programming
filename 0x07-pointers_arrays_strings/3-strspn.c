#include "main.h"

/**
 * _strspn - locates a character in a string
 * @s: string to be looked through
 * @accept: string that contains list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
