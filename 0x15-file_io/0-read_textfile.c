#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- stdoutputs a file
 * @filename: file to reaaddd
 * @letters: number of letters
 * Return: no . of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufA;
	ssize_t x;
	ssize_t r;
	ssize_t v;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	bufA = malloc(sizeof(char) * letters);
	v = read(x, bufA, letters);
	r = write(STDOUT_FILENO, bufA, v);

	free(bufA);
	close(x);
	return (r);
}
