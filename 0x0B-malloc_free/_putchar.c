#include <unistd.h>

/**
 * _putchar - function to print a type char
 * @c: char to prinft
 *
 * Return: 1 to show a success
 * return 0 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
