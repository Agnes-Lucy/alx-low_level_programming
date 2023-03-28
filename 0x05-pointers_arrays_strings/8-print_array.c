#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of integer
 * @a: array to be printed
 * @n: number of element in array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		if (count != (n - 1))
			printf(", ");
		count++;
	}
	putchar('\n');
}
