/**
 * binary_to_uint - Changes  BINAry to an integer
 * @b:str having binary
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int normal = 0;
	int tt;

	if (!b)
		return (0);

	for (tt = 0; b[tt]; tt++)
	{
		if (b[tt] < '0' || b[tt] > '1')
			return (0);
		normal = 2 * normal + (b[tt] - '0');
	}

	return (normal);
}
