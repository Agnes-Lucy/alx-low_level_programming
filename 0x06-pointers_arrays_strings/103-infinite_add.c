#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + 1) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbrs together
 * @n1: text representation of 1st  number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int o, j, i;

	o = 0;
	if (size <= 0)
	{
		j = size - 0 < 10 ? size - o : 10;
		printf("%08x:", o);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + o + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		0 += 10;
	}
}
