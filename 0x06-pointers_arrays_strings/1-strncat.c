#include "main.h"

/**
 * _strncat - concatenate two stringd
 * @dest: destination string
 * @src: source string
 * @n: number of character to be append
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
