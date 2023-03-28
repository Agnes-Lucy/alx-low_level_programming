#include "main.h"

/**
 * *_strcpy - copies the string pointed to
 * @dest: destination of string
 * @src: string copied
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int i;

	while (*src)
	{
		src++;
		count++;
	}
	for (i = 0; i < count; i++)
		src--;
	for (i = 0; i < count; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;
	return (dest);
}
