#include "main.h"

/**
 * *_strchr - function to search for a character
 *@s: - pointer to string to search
 *@c: character to search for
 *Return: pointer to c if found and null if not found
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
	s++;
	}
	return ('\0');
}
