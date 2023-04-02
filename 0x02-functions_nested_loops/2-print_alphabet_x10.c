#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 9)
	{
		for (j = 'a';  j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar (i);
		_putchar ('\n');
	}
}


