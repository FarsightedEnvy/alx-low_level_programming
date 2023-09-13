#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - print each element of the array on a new line
* @array: array
* @size: elemants to print
* @action: dual-format pointer for regular and hexadecimal printing.
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
