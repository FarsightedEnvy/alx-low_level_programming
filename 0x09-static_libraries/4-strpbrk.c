#include "main.h"

/**
 * _strpbrk - starting point
 * @s: input
 * @accept: input
 * Return: each time 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
