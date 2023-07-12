#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - look string digit
 * @str: an array string
 *
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int counter;

	counter = 0;
	while (counter < strlen(str))

	{
		if (!isdigit(str[counter]))
		{
			return (0);
		}

		counter++;
	}
	return (1);
}

/**
 * main - write arguments
 * @argc: counter
 * @argv: Avector args
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{

	int counter;
	int str_int;
	int sum = 0;

	counter = 1;
	while (counter < argc)
	{
		if (check_num(argv[counter]))

		{
			str_int = atoi(argv[counter]);
			sum += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		counter++;
	}

	printf("%d\n", sum);

	return (0);
}
