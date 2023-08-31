#include "main.h"

/**
 * _print_rev_recursion - displays a string in reverse
 * @s: string to be displayed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
