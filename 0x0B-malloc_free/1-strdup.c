#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - replicate to a new memory space allocated
 * @str: character
 * Return: each time 0 (success)
 */

char *_strdup(char *str)
{

	char *aaa;
	int k, s = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;
	aaa = malloc(sizeof(char) * (k + 1));
	if (aaa == NULL)
		return (NULL);
	for (s = 0; str[s]; s++)
		aaa[s] = str[s];
	return (aaa);
}
