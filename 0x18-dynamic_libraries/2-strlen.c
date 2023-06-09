#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string to be checked
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		++count;
		++s;
	}
	return (count);
}
