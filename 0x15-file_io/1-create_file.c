#include "main.h"
#include <string.h>
/**
 * create_file - func to create file
 * @filename: the name pointer of actual file
 * @text_content: -  text to print to file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int length, fp, x;

	length = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fp, text_content, length);

	if (fp == -1 || x == -1)
	{
		return (-1);
	}

	return (1);
}
