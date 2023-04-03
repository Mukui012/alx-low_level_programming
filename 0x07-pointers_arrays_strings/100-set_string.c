#include "main.h"

/**
 * set_string - sets value of pointer to char
 *
 * @s: pointer 1
 * @to: value that is copied by pointer
 * Return: void
 */

void set_string(char **s, char *to);
{
	*s = to;
}
