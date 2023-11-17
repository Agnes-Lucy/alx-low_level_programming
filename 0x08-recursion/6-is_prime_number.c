#include "main.h"

/**
* is_prime_number - returns a prime number
* @n: integer
* Return: 1 for a prime or 0 if not prime
*/

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	return (prime_number(2, n));
}

/**
* prime_number - find the prime number
* @x: integer
* @n: integer
* Return: 1 if prime or 0 if not
*/
int prime_number(int x, int n)
{
	if (n == x)
		return (1);
	else if (n % x == 0)
		return (0);
	return (prime_number(x + 1, n));
}
