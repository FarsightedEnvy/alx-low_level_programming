#include "main.h"
#include <stdio.h>

/**
 * print_array - print the first n integers from an array
 * @a: array of integers
 * @n: number of array elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
