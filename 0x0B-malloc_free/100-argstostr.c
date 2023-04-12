#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates arguments
 * @ac: argument
 * @av: argument
 * Return: Pointer
 */

char *argstostr(int ac, char **av)
{
	int m, n, concatLen;
	char *s1;

	if (ac == 0 || av == NULL)
		return (NULL);
	concatLen = 0;
	for (m = 0; m < ac; m++)
	{
		concatLen += strlen(av[m]) + 1;
	}
	s1 = (char *)malloc(sizeof(char) * concatLen);
	if (s1 == NULL)
		return (NULL);

	n = 0;
	for (m = 0; m < ac; m++)
	{
		strcpy(s1 + n, av[m]);
		n += strlen(av[m]);
		s1[n++] = '\n';
	}
	s1(n) = '\0';
	return (s1);
}
