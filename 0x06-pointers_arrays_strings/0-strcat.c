#include "main.h"

/**
 * _strcat - combine two strings together
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int s;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[k] = src[s];
		k++;
		s++;
	}
	dest[k] = '\0';
	return (dest);
}
