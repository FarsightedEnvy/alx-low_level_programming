#include "main.h"

/**
 * _memset - fill a memory block with a
 * designated value
 * @s: start filling memory from the given address
 * @b: desired value
 * @n: quantity of bytes to modify
 * Return: update n bytes in the array with a new value
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
