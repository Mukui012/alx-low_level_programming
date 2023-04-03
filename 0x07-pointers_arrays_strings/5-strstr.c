#include "main.h"

/**
 * _strstr - finds first occurrence of the substring
 *
 * @needle: substring that we're trying to find it's first occurence
 * @haystack: string to be looked through
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char  *_strstr(char *haystack, char *needle)
{
	char *strA, *strB;

	while (*haystack != '\0')
	{
		strA = haystack;
		strB = needle;

		while (*haystack != '\0' && *strB != '\0' && *haystack == *strB)
		{
			haystack++;
			strB++;
		}
		if (*strB == '\0')
			return (strA);
		haystack = strA + 1;
	}
	return (0);
}
