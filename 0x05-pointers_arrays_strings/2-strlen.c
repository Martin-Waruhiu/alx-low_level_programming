#include "main.h"

/**
 * _strlen - function to check string
 *
 * @s: - base srring
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	length++;
	s++;
	return (length);
}
