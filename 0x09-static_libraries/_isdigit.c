#include "main.h"

/**
* _isdigit - checks for a digit
* @c: alphabet
* Return: 0 for nondigit, 1 for digit
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
