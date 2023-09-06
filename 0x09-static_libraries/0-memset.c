#include "main.h"

/**
 * _memset - a program fills memory with a specified value
 * @s: memory fill starting address
 * @b: target value
 * @n: count of bytes to modify
 * Return: update an array with a new value for a specified number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
