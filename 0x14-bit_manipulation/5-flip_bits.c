#include "main.h"

/**
 * flip_bits - counts bit changes between two nums
 * @n: first num
 * @m: second num
 * Return: num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, countbit = 0;
	unsigned long int current, exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}
