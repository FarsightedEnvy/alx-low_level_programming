#include "function_pointers.h"

/**
* int_index - return the index if true, else -1
* @array: array
* @size: size of elements within array
* @cmp: main program's pointer to one of three functions
* Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
