#include "main.h"

/**
 * create_file - makes file
 * @filename:pt to file
 * @text_content: ptr to str
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int f, x, conter = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (conter = 0; text_content[conter];)
			conter++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(f, text_content, conter);

	if (f == -1 || x == -1)
		return (-1);

	close(f);

	return (1);
}
