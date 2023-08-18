#include "main.h"

/**
 * print_line - function creates a linear mark in terminal
 * @n: specify the count for printing the character _
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int k;

		for  (k = 1; k <= n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
