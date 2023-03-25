#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Character to be checked
 * Return:1 if @c is 0
 * Otherwise, we return 0
 */

int _isuper(int c)
{
	int start = 65, end = 90;

	if (c > = start && c < = end)
		return (1);
	return (0);
}

