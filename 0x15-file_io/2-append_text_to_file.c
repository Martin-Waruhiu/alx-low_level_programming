#include "main.h"
/**
 * append_text_to_file - appends text
 * @filename: name of file
 * @text_content: textt to  be appended
 * Return: 1 success -1 error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, fd, length;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	x = write(fd, text_content, length);
	if (x == -1 || fd == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
