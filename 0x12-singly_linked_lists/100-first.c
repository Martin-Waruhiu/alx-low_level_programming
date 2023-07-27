#include "lists.h"
#include <stdio.h>


void print_bfr_main(void)__attribute((constructor));

/**
 * print_bfr_main - at the sstart execution
 */
void print_bfr_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
