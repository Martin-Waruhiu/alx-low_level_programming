#include "main.h"



/**
 * get_endianness -  get endianeses
 * Return: integer
 */



int get_endianness(void)
{
	unsigned int x = 1;
	char *p = (char *) &x;

	return (*p);
}
