#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - output a name using a function pointer
 * @name: string to be added
 * @f: function pointer
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
