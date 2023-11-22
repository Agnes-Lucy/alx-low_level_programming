#include "main.h"
/**
* _strspn - a function that gets the length of a prefix substring
* @s: character
* @accept: character string
*
* Return: returns number of bytes in the initial segment s which consist
*of bytes from accept
**/
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
		if (accept[b] == '\0')
			return (c);
	}
	return (c);
}
