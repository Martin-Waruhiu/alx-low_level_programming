#include "main.h"
#include <stdlib.h>

/**
 * count_word - function to dtertemine the count
 * @s: checking string
 *
 * Return: words"
 */
int count_word(char *s)
{
	int word, z, x;

	word = 0;
	x = 0;

	for (z = 0; s[z] != '\0'; z++)
	{
		if (s[z] == ' ')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			x++;
		}
	}

	return (x);
}
/**
 * **strtow - divides string
 * @str: divin string to be used
 *
 * Return: pointer to the arrsy
 * NULL if error
 */
char **strtow(char *str)
{
	char **marix, *mp;
	int j, v = 0, lenn = 0, wordsz, d = 0, startt, endd;

	while (*(str + lenn))
		lenn++;
	wordsz = count_word(str);
	if (wordsz == 0)
		return (NULL);

	marix = (char **) malloc(sizeof(char *) * (wordsz + 1));
	if (marix == NULL)
		return (NULL);

	for (j = 0; j <= lenn; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (d)
			{
				endd = j;
				mp = (char *) malloc(sizeof(char) * (d + 1));
				if (mp == NULL)
					return (NULL);
				while (startt < endd)
					*mp++ = str[startt++];
				*mp = '\0';
				marix[v] = mp - d;
				v++;
				d = 0;
			}
		}
		else if (d++ == 0)
			startt = j;
	}

	marix[v] = NULL;

	return (marix);
}
