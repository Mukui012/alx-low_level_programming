#include "main.h"

/**
 * _strstr - checks for first occurrence of substring
 * @haystack: input string
 * @needle: substring
 * Return: pointer
*/

char *_strstr(char *haystack, char *needle)
{
	char *haystack1;
	char *needle2;

	while (*haystack != '\0')
	{
		haystack1 = haystack;
		needle2 = needle;

		while (*haystack != '\0' && *needle2 != '\0' && *haystack == *needle2)
		{
			haystack++;
			needle2++;
		}
		if (!*needle2)
			return (haystack1);
		haystack = haystack1 + 1;
	}
	return (0);
}
