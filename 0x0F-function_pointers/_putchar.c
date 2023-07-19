#include <unistd.h>

/**
 * _putchar - prints  char c to stdo
 * @c: char to print
 *
 * Return: success 1.
 * errorr, -1 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
