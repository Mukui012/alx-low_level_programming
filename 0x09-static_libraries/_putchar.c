#include <unistd.h>

/**
 * _putchar - outputs character
 * @c: character
 *
 * Return: 1(Success), -1(error)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
