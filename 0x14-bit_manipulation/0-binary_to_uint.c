#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - function that converts a binary to an uint
* @b: pointing to a string of 0 and 1 chars
* Return: the converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, int_n;

	int_n = 0;
	i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		int_n <<= 1;
		if (b[i] & 1)
			int_n = int_n + 1;
		i = i + 1;
	}

	return (int_n);
}
