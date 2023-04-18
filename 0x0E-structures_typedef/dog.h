#ifndef DOG
#define DOG

typedef struct dog dog_t;

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
dog_t *new_dog(char *name, float age, char *owner);

#endif
