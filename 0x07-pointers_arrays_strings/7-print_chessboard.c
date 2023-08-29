#include "main.h"

/**
 * print_chessboard - starting point
 * @a: array
 * Return: each time 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int k;
	int s;

	for (k = 0; k < 8; k++)
	{
		for (s = 0; s < 8; s++)
			_putchar(a[k][s]);
	_putchar('\n');
	}
}
