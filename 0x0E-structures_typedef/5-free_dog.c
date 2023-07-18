#include <stdlib.h>
	#include "dog.h"


/**
* free_dog - free struct dog
* @d: struct  to freee
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
