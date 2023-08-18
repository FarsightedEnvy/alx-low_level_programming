#include "main.h"

/**
 * _isupper - program checks for uppercase character
 * @c: modifiable text
 * Return: each time 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
