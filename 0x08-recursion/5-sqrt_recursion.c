#include "main.h"

/**
 * _sqrt_recursion - x raised to power y
 *
 * @n: number
 *
 * Return: int
**/

int _sqrt_recursion(int n)
{
	return (natural_square(n, 1));
}

/**
* natural_square - find natural_square
* @x: int
* @y: int
* Return: square root or -1
*/

int natural_square(int x, int y)
{
	long s = y * y;

	if (s > x)
	{
		return (-1);
	}

	if (s == x)
	{
		return (y);
	}

	return (natural_square(x, y + 1));
}
