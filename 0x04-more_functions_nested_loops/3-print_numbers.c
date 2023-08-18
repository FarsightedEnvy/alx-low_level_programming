#include "main.h"

/**
 * print_numbers - function verifies a digit (0 through 9)
 *
 * Return: each time 0
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
