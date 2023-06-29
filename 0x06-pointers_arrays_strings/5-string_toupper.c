#include "main.h"

/**
 *string_toupper - function to change to uppercase
 *@s: - pinte name
 *Return: 0
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
