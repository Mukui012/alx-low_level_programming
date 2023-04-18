#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory for struct dogs
 * @d: pointer to struct dog
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
