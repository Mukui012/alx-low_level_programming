#include "main.h"

/**
 * strlen1 - returns string length
 * @s: string to measure
 * @k: measure of string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int strlen1(char *s, int k)
{
	if (*s == 0)
		return (k - 1);
	return (strlen1(s + 1, k + 1));
}

/**
 * palind3 - compares string vs string reverse
 * @s: string
 * @k: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palind3(char *s, int k)
{
	if (*s != *(s + k))
		return (0);
	if (*s == 0)
		return (1);
	return (palind3(s + 1, k - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int l;

	l = strlen1(s, 0);
	return (palind3(s, l));
}
