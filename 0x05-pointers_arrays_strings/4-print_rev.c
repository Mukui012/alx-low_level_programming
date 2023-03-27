#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
