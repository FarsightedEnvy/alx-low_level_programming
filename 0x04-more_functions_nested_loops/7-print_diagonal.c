#include "main.h"

/**
 * print_diagonal - function creates a diagonal mark in terminal
 * @n: specify the count for printing the character \
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int k;
		int s;

		for (k = 0; k < n; k++)
		{
			for (s = 0; s < n; s++)
			{
			if (s == k)
				_putchar('\\');
			else if (s < k)
				_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
