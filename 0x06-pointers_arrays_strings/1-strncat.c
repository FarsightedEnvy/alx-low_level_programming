#include "main.h"

/**
 * _strncat - combine two strings together, using a maximum
 * of n bytes from the source string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k;
	int s;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
		dest[k] = src[s];
		k++;
		s++;
	}
	dest[k] = '\0';
	return (dest);
}
