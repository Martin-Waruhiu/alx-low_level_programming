#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initialize variable
 * @name: name of dog
 * @age: age of dog
 * @d: pinter to dog structure
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
	d->name = name;

	d->age = age;

	d->owner = owner;
	}


}
