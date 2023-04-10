#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: character
 * Return: 1(c is a letter), 0(not letter)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
		return (0);
}

