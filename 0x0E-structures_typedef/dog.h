#ifndef DOG_H
#define DOG_H


/**
 * struct dog - data type struct of a dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of e
 *
 * description: this is a description
 */
struct dog
{
	char *name;

	float age;

	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
