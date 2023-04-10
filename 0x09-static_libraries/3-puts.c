#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int d = 0;

	while (str[d])
	{
		_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}
