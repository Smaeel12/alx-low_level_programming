#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog.
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	/* allocating memory */
	p = malloc(sizeof(struct dog));
	if (p == NULL)
		return (NULL);

	/* storing a copy of name and owner */
	(*p).name = malloc(strlen(name) + 1);
	if ((*p).name == NULL)
	{
		free(p);
		return (NULL);
	}
	(*p).owner = malloc(strlen(owner) + 1);
	if ((*p).owner == NULL)
	{
		free((*p).name);
		free(p);
		return (NULL);
	}
	strcpy((*p).name, name);
	strcpy((*p).owner, owner);

	/* accessing the elements */
	(*p).name = (*p).name;
	(*p).age = age;
	(*p).owner = (*p).owner;

	return (p);
}
