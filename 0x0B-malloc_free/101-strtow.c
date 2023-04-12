#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits string
 * @str: string to be split
 *
 * Return: pointer
 */

char **strtow(char *str)
{
	int m, n, length, wordCount;
	char **strArray;

	if (str == NULL || *str == '\0')
		return (NULL);

	length = strlen(str);
	wordCount = 0;
	for (m = 0; m < length; m++)
	{
		if (str[m] != ' ' && (m == 0 || str[m - 1] == ' '))
			wordCount++;
	}
	strArray = (char **)malloc(sizeof(char *) * (wordCount + 1));
	if (strArray ==  NULL)
		return (NULL);

	n = 0;
	for (m = 0; m < length && n < wordCount; m++)
	{
		if (str[m] != ' ')
		{
			int k = m;

			while (k < length && str[k] != ' ')
				k++;
			strArray[n] = (char *)malloc(sizeof(char) * (k - m + 1));
			if (strArray[n] == NULL)
			{
				for (n--; n >= 0; n--)
					free(strArray[n]);
				free(strArray);
				return (NULL);
			}
			strncpy(strArray[n], str + m, k - m);
			strArray[n][k - m] = '\0';
			n++;
			m = k;
		}
	}
	strArray[wordCount] = NULL;
	return (strArray);
}

