#include <stdio.h>
#include "main.h"

/**
 * main - this is the entry point
 * @argc: - argument counter
 *@argv: - argument vector
 * unused_function - funtion to ignore unused function
 * @unused_function - definition of unused function
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	unused_function(argc);

	printf("%s\n", argv[i]);
	return (0);
}
/**
 * unused_function - definition
 * @unused_var: variable parameter (unused)
 */
void unused_function(int __attribute__((unused)) unused_var)
{

}
