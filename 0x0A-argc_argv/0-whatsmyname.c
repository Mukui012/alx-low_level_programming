#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: arguments that go into main
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
