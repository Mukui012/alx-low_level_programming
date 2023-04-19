#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes of a function.
 * @addr: address
 * @size: number of opcodes to print
 *
 * Return: void
 */

void print_opcodes(char *addr, int size)
{
	int i;
	unsigned char opcode;

	for (i = 0; i < size; i++)
	{
		opcode = *(unsigned char *)(addr + i);
		printf("%.2x", opcode);

		if (i != size - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)main, bytes);

	return (0);
}
