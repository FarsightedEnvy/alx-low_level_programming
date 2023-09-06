#include "main.h"

/**
 * _memcpy - function duplicates portion of memory
 * @dest: stored memory
 * @src: copied memory
 * @n: quantity of bytes
 * Return: memory copied with n bytes altered
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int s = n;

	for (; k < s; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
