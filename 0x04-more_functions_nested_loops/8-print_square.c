#include "main.h"

/**
 * print_square - function displays a square
 * @size : size of square
 * Description: use _putchar to print and # to print square
 */

void print_square(int size)
{
	int k;
	int s;

	s = 0;

	if (size < 1)
		_putchar('\n');

	while (s > size)
	{
		k = 0;

		while (k < size)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		s++;
	}
}
