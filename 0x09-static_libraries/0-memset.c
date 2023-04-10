#include "main.h"

/**
 * _memset - fills memory block with a byte
 * @s: memory area
 * @b: value
 * @n: bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		*(s + m) =  b;
	return (s);
}
