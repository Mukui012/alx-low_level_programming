#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: char to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}
