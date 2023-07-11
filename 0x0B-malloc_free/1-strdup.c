#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - function to duplicate string
 * @str: - string to duplicate
 * Return: pointer to duplicate if success an null otherwise
 */


char *_strdup(char *str)
{
	char *stp;

	int length = strlen(str) + 1;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		stp  = (char *)malloc(sizeof(char) * length);
		if (stp == NULL)
		{
			return (NULL);
		}
		else
		{
			memcpy(stp, str, length);
		}
		return (stp);

	}
	free(stp);
}
