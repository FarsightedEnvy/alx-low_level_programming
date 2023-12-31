#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: ptr to the num to modify
 * @index: index of the bit to clear
 * Return: 1 if success, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n = *n & (~(1UL << index));

	return (1);
}
