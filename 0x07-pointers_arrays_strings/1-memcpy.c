#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: stored memory
 * @src: copied memory
 * @n: number of bytes
 * Return: duplicated memomry with n altered bytes
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
