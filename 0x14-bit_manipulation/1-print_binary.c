#include "main.h"

/**
 * print_binary - displays a num in binary notation
 * @n: num to display
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

/**
 * _pow - calculates (base ^ power)
 * @base: exponent base
 * @power: exponent power
 * Return: value (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int k;

	num = 1;
	for (k = 1; k <= power; k++)
		num *= base;
	return (num);
}
