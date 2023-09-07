#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - combines two strings
 * @s1: first string
 * @s2: second string
 * @n: quantity of bytes
 * Return: a reference to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ks1, ks2, ksout, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ks1 = 0; s1[ks1] != '\0'; ks1++)
		;

	for (ks2 = 0; s2[ks2] != '\0'; ks2++)
		;

	if (n > ks2)
		n = ks2;

	ksout = ks1 + n;

	sout = malloc(ksout + 1);

	if (sout == NULL)
		return (NULL);

	for (k = 0; k < ksout; k++)
		if (k < ks1)
			sout[k] = s1[k];
		else
			sout[k] = s2[k - ks1];

	sout[k] = '\0';

	return (sout);
}
