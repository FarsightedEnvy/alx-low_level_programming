#include "main.h"

/**
 * char *_strcpy - duplicate a string
 * @dest: value of destination
 * @src: value of source
 * Return: the destination pointer
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k++] = '\0';
	return (dest);
}
