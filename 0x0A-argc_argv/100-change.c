#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * _isdigit - checks if string is num
 * @s: string
 *
 * Return: 1(success), 0(error)
 */
int _isdigit(char *s)
{
	int i, look, d;

	i = 0, d = 0, look = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			look = 0;
			break;
		}
	}
	return (look);
}
/**
 * main - Entry point
 *
 * @argc: number of bytes
 * @argv: array pointer
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int j, k, coins, cents, d;
	int c[5] = {25, 10, 5, 2, 1};

	k = 1, j = 0, coins = 0;
	if (argc == 2)
	{
		if (_isnumber(argv[1]))
		{
			k = 0, cents = atoi(argv[1]);
			if (cents >= 0)
			{
				while (cents != 0)
				{
					d = cents / c[j];
					if (d == 0)
					{
						j++;
					}
					else
					{
						coins += d;
						cents -= (d * c[j]);
					}
				}
			}
		}
	}
	if (k == 0)
		printf("%i\n", coins);
	else
		printf("%s\n", "Error");
	return (k);
}
