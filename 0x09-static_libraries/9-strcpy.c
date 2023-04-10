#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: pointer(dest)
 */

char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (b >= 0)
	{
		*(dest + b) = *(src + b);
		if (*(src + b) == 0)
			break;
		b++;
	}
	return (dest);
}
