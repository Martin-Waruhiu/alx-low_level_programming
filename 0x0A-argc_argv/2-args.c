#include <stdio.h>

/**
 * main - entry point of programme
 * @argc: - argument counter
 * @argv: - argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
