#include "main.h"

/**
 * puts2 - displays every other character of a string
 * @str: string to be treated
 * Return: void
 */

void puts2(char *str)
{
	int k;
	int s = 0;

	while (str[s] != '\0')
	{
		s++;
	}

	for (k = 0; k < s; k += 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
