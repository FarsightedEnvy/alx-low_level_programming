#include "main.h"

/**
 * reverse_array - invert an array of integers
 * @a: array
 * @n: count the elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int k;
	int s;

	for (k = 0; k < n--; k++)
	{
		s = a[k];
		a[k] = a[n];
		a[n] = s;
	}
}
