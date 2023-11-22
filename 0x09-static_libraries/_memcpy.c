#include "main.h"
/**
* _memcpy - a function that copies memory area
* @dest: char
* @src: char
* @n: int
* Return: a pointer to dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n ; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
