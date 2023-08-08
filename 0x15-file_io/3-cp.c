#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filename);
void close_file(int fd);

/**
 * create_buffer - Allocate memoery for buffer.
 * @filename:name of file
 *
 * Return: ptr to buffer
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * closing_file - Close f'ds
 * @fd: The file descriptor
 */
void closing_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy f1 to file 2
 * @argc: argz count
 * @argv: argv vector
 *
 * Return: 0 success -1 fail
 */
int main(int argc, char *argv[])
{
	int fp1, fp2, j, k;
	char *buffer;
	/*check if the rgument account is three*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*call the buffer and pass the second file to copy to*/
	buffer = create_buffer(argv[2]);
	/*open the source file and read it according to buffer*/
	fp1 = open(argv[1], O_RDONLY);
	j = read(fp1, buffer, 1024); /*returns bytes read*/
	/*create the destination file*/
	fp2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fp1 == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		/*writing to our destination file*/
		k = write(fp2, buffer, j);
		if (fp2 == -1 || k == -1) /*check if succesful*/
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		j = read(fp1, buffer, 1024);
		fp2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (j > 0); /*until end of file*/

	free(buffer);
	closing_file(fp1);
	closing_file(fp2);

	return (0);
}
