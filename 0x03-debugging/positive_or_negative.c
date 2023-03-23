#include "main.h"

/**
 * positive_or_negative - Check for positive and negative values
 * @i: the number to be checked
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
	printf("\n");
}
