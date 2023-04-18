#ifndef DOG
#define DOG

/**
 * struct dog - new type Structure
 * @name: string name of dog
 * @age: float age of dog
 * @owner: string owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
