#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: character used to initialize array
 * Return: null or array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (!p)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
