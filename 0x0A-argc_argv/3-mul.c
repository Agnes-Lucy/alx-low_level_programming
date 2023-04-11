#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: Argument count
 * @argv: Array of pointers to the strings which are those arguments
 *
 * Return: 1 if argc is not 3, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;
	printf("%d\n", result);
	return (0);
}
