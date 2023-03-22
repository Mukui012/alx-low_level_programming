#include <stdio.h>

/**
 * main - fibonacci < 3
 *
 * Purpose - no hardcode
 *
 * Return: Always 0.
 */

int main(void)
{
	int a = 1, b = 2, i;

	printf("%d, %d", a, b);
	for (i = 3; i <= 98; i++)
	{
		int c = a + b;

		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
