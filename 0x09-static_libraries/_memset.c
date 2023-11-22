#include "main.h"
/**
* _memset - a function that fills memory with a constant byte
* @s: char
* @b: char
* @n: int
* Return: a pointer to memory area s
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n ; a++)
	{
		s[a] = b;
	}
	return (s);
}
