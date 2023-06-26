#include "main.h"

/**
 * swap_int - function to swap values
 * @a: - value to swap
 * @b: -value to be swapped to
 */
void  swap_int(int *a, int *b)
{
	int var = *a;

	*a = *b;

	*b = var;
}
