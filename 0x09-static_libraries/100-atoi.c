#include "main.h"

/**
 * _atoi - convert  string to integer.
 *
 * @s: the string.
 *
 * Return: int.
 */

int _atoi(char *s)
{
	int signn = 1, j = 0;
	unsigned int c = 0;

	while (!(s[j] <= '9' && s[j] >= '0') && s[j] != '\0')
	{
		if (s[j] == '-')
			signn *= -1;
		j++;
	}
	while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
	{
		c = (c * 10) + (s[j] - '0');
		j++;
	}
	c *= signn;
	return (c);
}
