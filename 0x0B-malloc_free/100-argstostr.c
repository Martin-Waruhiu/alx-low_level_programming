#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 * argstostr - function to concatenate arguments
 *@ac: - count of arguments
 *@av: array of char in arguments
 *Return: NULL
 */


char *argstostr(int ac, char **av)
{
	char *ptr;

	int length = 0;

	int length2 = 0;

	int index = 0;

	int j, i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length = length + strlen(av[i] + 1);
	}
	ptr = (char *)malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		length2 = strlen(av[j]);
		strncpy(ptr + index, av[j], length2);
		index = index + length2;
		ptr[index++] = '\0';
	}
	ptr[length] = '\0';
	return (ptr);
}
