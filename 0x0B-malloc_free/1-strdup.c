#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate a string.
 * @str: string
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	int a;
	char *s1;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
	;
	a++;
	s1 = malloc(sizeof(char) * a);

	if (s1 == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		s1[a] = str[a];
	s1[a] = '\0';
	return (s1);
}
