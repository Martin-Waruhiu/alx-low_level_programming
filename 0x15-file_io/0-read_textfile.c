#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - func that reads textfile and prints
 * @filename: the name of file
 * @letters: no. of letters printed
 * Return: letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fP;
	char *buffer;
	ssize_t x;
	ssize_t v;

	fP = open(filename, O_RDONLY);
	if (fP == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	x = read(fP, buffer, letters);
	v = write(STDOUT_FILENO, buffer, x);

	free(buffer);
	close(fP);
	return (v);
}
