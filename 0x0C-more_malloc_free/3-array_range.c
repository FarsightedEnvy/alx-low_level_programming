#include "main.h"
#include <stdlib.h>

/**
 * array_range - generates an integer array
 * @min: lowest value
 * @max: highest value
 * Return: reference to freshly created array
 */

int *array_range(int min, int max)
{
	int *ks;
	int k;

	if (min > max)
		return (NULL);

	ks = malloc(sizeof(*ks) * ((max - min) + 1));

	if (ks == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		ks[k] = min;

	return (ks);
}
