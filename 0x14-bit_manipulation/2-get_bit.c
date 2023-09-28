#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: num to check bits in
 * @index: index at which to check the bit
 * Return: value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	return ((n >> index) & 1);
}
