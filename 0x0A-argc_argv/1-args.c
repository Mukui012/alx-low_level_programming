#include <stdio.h>
#include "main"

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: pointer array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
