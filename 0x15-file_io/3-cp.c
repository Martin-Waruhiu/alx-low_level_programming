
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buffer(char *file);
void exit_file(int fd);

/**
 * make_buffer - makes bytess
 * @file:name of file
 *
 * Return: ptr to buff
 */
char *make_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * exit_file - cloz fil
 * @fd: fd
 */
void exit_file(int fd)
{
	int v;

	v = close(fd);

	if (v == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Cps file to another
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f, t, x, w;
	char *buffA;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffA = make_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	x = read(f, buffA, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffA);
			exit(98);
		}

		w = write(t, buffA, x);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffA);
			exit(99);
		}

		x = read(f, buffA, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(buffA);
	exit_file(f);
	exit_file(t);

	return (0);
}
