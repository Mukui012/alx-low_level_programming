#ifndef STRUCTS
#define STRUCTS

/**
 * struct dog - description for an animal
 * @name: member1
 * @age: member2
 * @owner: member3
 *
 * Description: Longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
