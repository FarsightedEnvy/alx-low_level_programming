#include "main.h"

/**
 * print_number - function displays an integer
 * @n: the integer to be printed
 */

void print_number(int n)
{
	unsighted int k = n;

	if (n < 0)
	{
		_putchar('-');
		k = -k;
	}

	if ((k / 10) > 0)
		print_number(k / 10);

	_putchar((k % 10) + '0');
}
