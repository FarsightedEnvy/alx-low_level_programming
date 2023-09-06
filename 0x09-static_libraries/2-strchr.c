#include "main.h"

/**
 * _strchr - starting point
 * @s: input
 * @c: input
 * Return: each time 0 (success)
 */

char *_strchr(char *s, char c)
{
	int k = 0;

	for (; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}
	return (0);
}
