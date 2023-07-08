#include <stdio.h>
#include "main.h"

/**
 * main -entry point
 * @argc: - argument counter
 * @argv: - argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 1;

	printf("%d\n", argc - i);
	unused_func(**argv);
	return (0);
}
/**
 * unused_func - to ignore unused variable argv
 * @unused_var:  - parameter topass unused argument
 */

void unused_func(char __attribute__((unused)) unused_var)
{

}
