#include "main.h"

/**
 * *_strchr -  function that locates a character in a string
 * @s:  string to be search
 * @c: character to be located
 * Return: a poiinter to the first occurence if c is found
 * and null if c is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
