#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: pointer to structure dog.
 * @name: string name of dog
 * @age: float age of dog.
 * @owner: string owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
