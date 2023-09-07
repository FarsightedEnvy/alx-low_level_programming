#include "main.h"
#include <stdlib.h>

/**
 * str_concat - retrieve input ends and combine them to determine size
 * @s1: concatenate with input one
 * @s2: concatenate with input two
 * Return: concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int k, sk;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	k = sk = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[sk] != '\0')
		sk++;
	conct = malloc(sizeof(char) * (k + sk + 1));
	if (conct == NULL)
		return (NULL);
	k = sk = 0;
	while (s1[k] != '\0')
	{
		conct[k] = s1[k];
		k++;
	}
	while (s2[sk] != '\0')
	{
		conct[k] = s2[sk];
		k++, sk++;
	}
	conct[k] = '\0';
	return (conct);
}
