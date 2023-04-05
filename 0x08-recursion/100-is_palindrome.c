#include "main.h"

/**
 * strlen1 - returns length of string
 * @s: string to measure
 * @k: measure of string
 * Return: 1(success), -1(error)
 */

int strlen1(char *s, int k)
{
	if (*s == 0)
		return (k - 1);
	return (strlen1(s + 1, k + 1));
}

/**
 * palindrome1 - performs comparison
 * @s: string to be checked
 * @k: length of string
 * Return: 1(success), -1(error)
 */

int palindrome1(char *s, int k)
{
	if (*s != *(s + k))
		return (0);
	if (*s == 0)
		return (1);
	return (palindrome1(s + 1, k - 2));
}
/**
 * is_palindrome - returns 1 for palindrome
 * @s: string
 * Return: 1(success),-1(error)
 */
int is_palindrome(char *s)
{
	int m;

	m = strlen1(s, 0);
	return (palindrome1(s, m));
}
