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
	int i, j, x, y, sum;
	char *str;

	x = y = 0;
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			x++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			x++;
	}
	sum = x + y;
	str = (char *)malloc(sizeof(char) * (sum + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		str[i] = s1[i];
	for (j = 0; j < y; j++, i++)
		str[i] = s2[j];
	str[sum] = '\0';
	return (str);
}
