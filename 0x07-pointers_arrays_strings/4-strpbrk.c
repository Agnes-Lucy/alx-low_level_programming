#include "main.h"

/**
 * *_strpbrk -  function locates the first occurrence in the string s
 *  of any of the bytes in the string accept
 *  @s: string to be search
 *  @accept: set of byte to be searchedd
 *  Return: A point to the matched bytes and null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
