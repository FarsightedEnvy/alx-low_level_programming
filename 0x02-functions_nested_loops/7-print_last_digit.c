#include "main.h"

/**
 * print_last_digit - this outputs the final digit of a num
 * @n: alter the manner in which the num is handled
 * Return: value held by the final digit of the num
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
