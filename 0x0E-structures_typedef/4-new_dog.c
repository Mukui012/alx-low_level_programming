#include "dog.h"

/**
 * _strdup - duplicate string
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	if (!str)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc(sizeof(char) * (len + 1));

	if (!new_str)
		return (NULL);

	for (i = 0; i <= len; i++)
		new_str[i] = str[i];

	return (new_str);
}

/**
 * new_dog - structure
 * @name: member1
 * @age: member2
 * @owner: member3
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (!name || !owner)
		return (NULL);

	newDog = malloc(sizeof(dog_t));

	if (!newDog)
		return (NULL);

	newDog->name = _strdup(name);
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = _strdup(owner);
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
