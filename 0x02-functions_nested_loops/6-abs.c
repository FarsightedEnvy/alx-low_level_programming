#include "main.h"

/**
 * _abs - calculates the magnitude of an integer's value
 * @c: compute this numerical value
 * Return: either the absolute value or zero of the number
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
