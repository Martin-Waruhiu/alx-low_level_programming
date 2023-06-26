#include "main.h"

/**
 *char *_strcpy - function to copy string
 * @dest: - to copy to
 * @src: - to copy from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	int x = 0;

	while ((*src + l) != '\0')
	{
	l++;
	}
	for ( ; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
