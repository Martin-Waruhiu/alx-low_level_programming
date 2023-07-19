#include <stdio.h>
#include <stdlib.h>

/**
 * main - writes opcodes
 * @argc: arguments
 * @argv: array arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, j;
	char *ptrr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptrr = (char *)main;

	for (j = 0; j < bytes; j++)
	{
		if (j == bytes - 1)
		{
			printf("%02hhx\n", ptrr[j]);
			break;
		}
		printf("%02hhx ", ptrr[j]);
	}
	return (0);
}
