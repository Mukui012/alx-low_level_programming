#include <stdio.h>
#include "main"

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: pointer array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
