#include "main.h"

/**
 * puts2 - print strings
 * @str: string to be printed
 * Return: 0
 */

void puts2(char *str)
{
	int i;
	int count = 0;

	while (*str)
	{
		count++;
		str++;
	}
	for (i = 0; i < count; i++)
		str--;
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
