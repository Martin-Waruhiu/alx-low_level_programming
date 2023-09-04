#include "main.h"

/**
 * append_text_to_file - eof appends
 * @filename: ptr to file
 * @text_content: str to add
 *
 * Return: 1 or -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, x, conter = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (conter = 0; text_content[conter];)
			conter++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	x = write(fd, text_content, conter);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
