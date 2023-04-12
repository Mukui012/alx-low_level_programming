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
	int m, n, length, sum;
	char **strArr;

	if (str == NULL || *str == '\0')
		return (NULL);

	length = strlen(str);
	sum = 0;
	for (m = 0; m < length; m++)
	{
		if (str[m] != ' ' && (m == 0 || str[m - 1] == ' '))
			sum++;
	}
	strArr = (char **)malloc(sizeof(char *) * (sum + 1));
	if (strArr ==  NULL)
		return (NULL);

	n = 0;
	for (m = 0; m < length && n < sum; m++)
	{
		if (str[m] != " ")
		{
			int k = m;

			while (k < length && str[k] != " ")
				k++;
			strArr[n] = (char *)malloc(sizeof(char) * (k - m + 1));
			if (strArr[n] == NULL)
			{
				for (n--; n >= 0; n--)
					free(strArr[n]);
				free(strArr);
				return (NULL);
			}
			strncpy(strArr[n], str + m, k - m);
			strArr[n][k - m] = '\0';
			n++;
			m = k;
		}
	}
	strArr[sum] = NULL;
	return (strArr);
}

