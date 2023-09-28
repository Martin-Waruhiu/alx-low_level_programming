#include "main.h"
/**
 * binary_to_uint - func to convert binsary to ec
 * @b: str of 0 and 1's
 * Return: int num
 */

unsigned int binary_to_uint(const char *b)
{
        int x;
        unsigned int rslt = 0;

        if (!b)
                return (0);

        for (x = 0; b[x]; x++)
        {

                if (b[x] < '0' || b[x] > '1')
                {
                        return (0);
                }
        rslt = 2 * rslt + (b[x] - '0');
        }
        return (rslt);
}
