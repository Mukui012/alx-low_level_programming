#include "main.h"
#include <stdlib.h>

/**
* create_array - creates array and initialize it
* @size: the size of the array
* @c: initial character
*
* Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char *arr1;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr1 = (char *)malloc(sizeof(char) * size);
	if (arr1 == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr1[i] = c;
	return (arr1);
}
