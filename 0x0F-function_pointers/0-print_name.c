#include "function_pointers.h"

/**
 * print_name -  prints name
 * @name: string of characters
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *));
{
	if (name == '0' || f == '0')
		return;

	f(name);
}
