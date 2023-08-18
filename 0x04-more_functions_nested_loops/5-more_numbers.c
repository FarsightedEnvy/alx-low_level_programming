#include "main.h"

/**
 * more_numbers - function prints numbers from 0 to 14 tenfold
 * followed by a new line
 */

void more_numbers(void)
{
	int k;
	int s;

	for (k = 0; k < 10; k++)
	{
		for (s = 0; s < 15; s++)
		{
			if (s >= 10)
				_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
		}
		_putchar('\n');
	}
}
