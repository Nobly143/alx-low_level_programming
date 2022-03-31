#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - checks if a given number is a prime number
 * @n: number to check for prime number
 * Return: 1 for prime 0 for not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}

/**
 * prime - recursion to check for prime number
 * @n: number to check
 * @i: iterator
 * Return: 1 for prime 0 for not prime
 */
int prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (x(n, i + 1));
}
