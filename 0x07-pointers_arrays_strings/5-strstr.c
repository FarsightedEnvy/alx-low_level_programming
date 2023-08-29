#include "main.h"

/**
 * _strstr - starting point
 * @haystack: input
 * @needle: input
 * Return: each time 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{

		char *k = haystack;
		char *s = needle;

		while (*k == *s && *s != '\0')
		{
			k++;
			s++;
		}

		if (*s == '\0')
			return (haystack);
	}
	return (0);
}
