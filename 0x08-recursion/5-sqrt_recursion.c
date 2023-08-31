#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: input number for square root calculation
 * Return: square root result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - sources for finding the sqrt of a num
 * @i: iterator
 * Return: square root result
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
