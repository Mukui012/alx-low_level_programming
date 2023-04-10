#include "main.h"

/**
 * _islower - looks out for lowercase letters
 * @c: character to look at
 *
 * Return: 1(if c is lowercase), 0(error)
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
