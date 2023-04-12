#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: pointer to newly allocated space in memory,NULL(error)
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int a = 0, b = 0, k = 0;

	if (s1 != NULL)
		for (; s1[a]; a++)
		;
	if (s2 != NULL)
		for (; s2[b]; b++)
		;

	str = malloc(sizeof(char) * (a + b + 1));
	if (str == NULL)
		return (NULL);

	while (k < a)
	{
		str[k] = s1[k];
		k++;
	}

	while (k < a + b)
	{
		str[k] = s2[k - a];
		k++;
	}
	str[k] = '\0';
	return (str);
}
