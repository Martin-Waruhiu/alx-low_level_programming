#include "main.h"

/**
 * get_endianness - inds out if a little or big endian
 * Return: large, 1 small
 * */
int get_endianness(void)
{
	unsigned int zz = 1;
	char *chr = (char *) &zz;

	return (*chr);
}
