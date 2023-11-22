#include "main.h"
/**
* _strchr - a function that locates a character in a string
* @s: string
* @c: char in s
* Return: the first occurrence or NULL
**/
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	if (s[a] == c)
		return (s + a);
	else
		return ('\0');
}
