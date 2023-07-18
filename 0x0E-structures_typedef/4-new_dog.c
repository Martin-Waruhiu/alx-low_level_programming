#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function for len of string
 * @str: string to measure
 * Return: length
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}

/**
 * _strcpy - function to copy str
 * @dest: destination
 * @src: source
 * Return: pointeer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int lenn = 0;

	int j;

	while (*src != '\0')
	{
		lenn++;
		src++;
	}
	for (j = 0; j < lenn; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - function for new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int lenn1, lenn2;

	lenn1 = _strlen(name);
	lenn2 = _strlen(owner);


		dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (lenn1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
		dog->owner = malloc(sizeof(char) * (lenn2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;


	return (dog);
}
