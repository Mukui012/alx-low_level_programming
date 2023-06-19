#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: char to be checked
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i += 1;
		s++;
	}
	return (i);
}
