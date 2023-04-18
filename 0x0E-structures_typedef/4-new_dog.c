#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(struct dog));

	if (p == NULL)
		return (NULL);
	(*p).name = name;
	(*p).age = age;
	(*p).owner = owner;
	return (p);
}
