#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - concatenates two strings by n bytes
 * @s1: - destination string
 * @s2: source string
 * @n: number of bytes
 * Return: pointer to memory location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;

	unsigned int len2;

	char *s5;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1 + 1);

	len2 = strlen(s2 + 1);

	if (n >= len2)
	{
		n = len2;
	}

	/**
	 * alllocates memory for the length of s1 and
	 * n bytes of s2
	 */
	s5 = malloc(sizeof(char) * len1 + n);
	if (s5 == NULL)
	{
		return (NULL);
	}
		strcpy(s5, s1);
		strncat(s5, s2, n);

	return (s5);
}
