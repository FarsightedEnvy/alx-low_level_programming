#include "main.h"

/**
 * puts_half - displays half of a string
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int s = 0;
	int k;

	while (str[s] != '\0')
	{
		s++;
	}
	if (s % 2 == 1)
	{
		k = (s - 1) / 2;
		k += 1;
	}
	else
	{
		k = s / 2;
	}

	for (; k < s; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
