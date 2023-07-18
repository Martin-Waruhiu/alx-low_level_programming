#ifndef DOG_H
#define DOG_H


/**
 * struct dog - data type struct of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;

	float age;

	char *owner;
};

/**
 * dog - alias for struct dog
 */

typedef struct dog dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
