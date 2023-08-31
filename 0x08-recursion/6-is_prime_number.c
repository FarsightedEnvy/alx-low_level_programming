#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - indicates if integer is prime or not
 * @n: evaluate number
 * Return: if n is prime num 1, if not 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively determines if a num is prime
 * @n: evaluate number
 * @i: iterator
 * Return: if n is prime 1, if not 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
