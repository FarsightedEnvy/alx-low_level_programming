#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 * @b: size of memory allocation
 * Return: reference to the allocated memory
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	char *k;

	k = malloc(b);
	if (k == NULL)
		exit(98);
	return (k);
}
