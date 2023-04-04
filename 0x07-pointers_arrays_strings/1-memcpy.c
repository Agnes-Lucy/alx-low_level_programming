#include "main.h"

/**
 * *_memcpy - function that copies n bytes from memory area src
 * to memory area dest
 * @n: function copies
 * @src: bytes  from memeory area
 * @dest: to memory area
 * Return: a pointer  to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
