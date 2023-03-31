#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destinaion string
 * @src: source string
 * @n: number of string
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
