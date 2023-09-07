#include "main.h"
#include <stdlib.h>

/**
 * _calloc - reserves memory for an array
 * @nmemb: quantity of elements
 * @size: byte size
 * Return: reference to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	unsigned int s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = malloc(nmemb * size);

	if (k == NULL)
		return (NULL);

	for (s = 0; s < (nmemb * size); s++)
		k[s] = 0;

	return (k);
}
