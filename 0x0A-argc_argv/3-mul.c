#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 success or error return 1
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);

	int b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", a * b);
	}
	return (0);
}
