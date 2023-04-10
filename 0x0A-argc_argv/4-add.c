#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - entry point
* @argc: number of arguments
* @argv: arguments array
*
* Return: 0(success)
*/

int main(int argc, char **argv)
{
	int x, y, sum = 0;
	char *str1;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; argv[x]; x++)
	{
		y = strtol(argv[x], &flag, 10);
		if (*str1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += y;
		}
	}
	printf("%d\n", sum);
	return (0);
}
