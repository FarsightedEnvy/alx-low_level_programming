#include "main.h"

/**
 * print_alphabet_x10 - print out the alphabet ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char k;
	int s = 0;

	while (s <= 9)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
		s++;
	}
}
