#include "main.h"

/**
 * *_strncat - function to concatenate
 * @dest: - destination
 * @src: - source
 * @n: - number of bytes allowed for source files
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
