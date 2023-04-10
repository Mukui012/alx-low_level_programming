#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int a, mul;

	mul = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		mul = 1;
	}
	else
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", a);
	}
	return (mul);
}
