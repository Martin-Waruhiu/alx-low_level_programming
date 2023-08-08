#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filename);
void closing_file(int fd);
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fp1, fp2, x, k;
	char *buffer;

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}
	else
	{
		buffer = create_buffer(argv[2]);
		fp1 = open(argv[1], O_RDONLY);
		x = read(fp1, buffer, 1024);
		if (fp1 == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		fp2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		k = write(fp2, buffer, 1024);
		if (fp2 == -1 || k == -1)
		{
			dprintf(STDERR_FILENO, "Error:  Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}
	free(buffer);
	closing_file(fp1);
	closing_file(fp2);
	return (0);
}
/**
 * create_buffer - func to create buffer
 * @filename: name of file
 * Return: buffer
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}
/**
 * closing_file - closes file
 * @fd: - file descriptor
 */
void closing_file(int fd)
{
	int p;

	p = close(fd);
	if (p == -1)
	{
		dprintf(STDERR_FILENO,  "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
