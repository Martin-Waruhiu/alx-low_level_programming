#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: destination to copy
 *@src: source to copy
 *@n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (*src != '\0' && *dest != '\0' && i < n)
	{
		dest[i] = src[i];

		src++;
		dest++;
		i++;
	}
	return (dest);
}
