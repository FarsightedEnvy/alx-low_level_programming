#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a reversed string
 * @s: print string
 * Return: void
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	for (k -= 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
