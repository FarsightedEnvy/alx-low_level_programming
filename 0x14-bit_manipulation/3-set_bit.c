#include "main.h"

/**
 * set_bit - prog modifies a bit to 1 at a specific index
 * @n: num to set
 * @index: index at which to set bit
 * Return: 1 if success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n |= (1UL << index);

	return (1);
}
