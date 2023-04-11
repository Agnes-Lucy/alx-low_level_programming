#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 1 if argc is not equal to 2, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int cent;
	int counter;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	counter = 0;
	while (cent > 0)
	{
		if (cent >= coins[i])
		{
			counter += cent / coins[i];
			cent = cent - ((cent / coins[i]) * coins[i]);
		}
		i++;
	}
	printf("%d\n", counter);
	return (0);
}
