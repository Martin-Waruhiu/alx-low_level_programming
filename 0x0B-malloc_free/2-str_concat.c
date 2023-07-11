#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function to concatenate strings using dma
 * @s1: - destination
 * @s2: - source
 * Return: pointer to s3
 */

char *str_concat(char *s1, char *s2)
{
	int length = strlen(s1) + strlen(s2 + 1);

	char *s3;

	s3 = (char *)malloc(sizeof(char) * length);
	if (s3 == NULL)
	{
		return (NULL);
	}
	else
	{
		strcat(s3, s1);
		strcat(s3, s2);
	}
	if (s1 == NULL || s2 == NULL)
	{
		strcat(s3, s1);
		strcat(s3, s2);
	}
	return (s3);
	free(s3);
}
