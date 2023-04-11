#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: Argument count
 * @argv: array of arguments
 * Return: 1 if argv contains symbols or non digits, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	sum = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
