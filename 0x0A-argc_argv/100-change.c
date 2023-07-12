#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints coins
 * @argc:  arguments
 * @argv: arguments
 *
 * Return: 0  1 Error
 */
int main(int argc, char *argv[])
{
	int number, i, results;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	results = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && number >= 0; i++)
	{
		while (number >= coins[i])
		{
			results++;
			number -= coins[i];
		}
	}

	printf("%d\n", results);
	return (0);
}
