#include <stdio.h>
#include "dog.h"


/**
 * print_dog - function to print elemnts in struct
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner =  "(nil)";
	}
	printf("NAME: %s\nAGE: %f\nOWNER: %s\n", d->name, d->age, d->owner);
}
