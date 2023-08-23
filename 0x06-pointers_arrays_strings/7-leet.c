#include "main.h"

/**
 * leet - convert text into 1337speak encoding
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int k;
	int s;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (s = 0; s < 10; s++)
		{
			if (n[k] == s1[s])
			{
				n[k] = s2[s];
			}
		}
	}
	return (n);
}

