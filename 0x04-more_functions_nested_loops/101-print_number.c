#include "main.h"

/**
 * print_number - function displays an integer
 * @n: the integer to be printed
 */

void print_number(int n)
{
	unsighted int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
