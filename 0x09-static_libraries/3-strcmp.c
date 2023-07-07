#include "main.h"

/**
 * _strcmp - function to compare
 * @s1: first string
 * @s2: string to compare
 * Return: 0 or a -ve or +ve
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
			return (0);
		else if (*s1 > *s2)
			return (15);
		else
			return (-15);
		s1++;
		s2++;
	}
	return (0);
}
