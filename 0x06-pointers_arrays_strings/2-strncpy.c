#include "main.h"

/**
 * *_strncpy - function to copy string
 * @dest: - destination
 * @src: - source
 * @n: number of characters
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (ptr);
}
