#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string to check for the occurence of the character c
 * @c: character to check for in string s
 *
 * Return: pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return s;
		s++;
	}
	return (0);
}
