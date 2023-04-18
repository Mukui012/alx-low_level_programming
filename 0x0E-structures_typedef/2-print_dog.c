#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints struct dog
 * @d: pointer
 * Return: 1(success),-1(error)
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((*d).name != 0)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", (*d).age);
		if ((*d).owner != 0)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)\n");
	}
}
