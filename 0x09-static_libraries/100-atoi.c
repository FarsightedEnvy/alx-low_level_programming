#include "main.h"

/**
 * _atoi - to transform a string into an integer
 * @s: the string for program use
 * Return: integer
 */

int _atoi(char *s)
{
	int sig = 1, k = 0;
	unsigned int unsig = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
			sig *= -1;
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		unsig = (unsig * 10) + (s[k] - '0');
		k++;
	}
	unsig *= sig;
	return (unsig);
}
