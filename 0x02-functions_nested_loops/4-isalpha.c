#include "main.h"

/**
 * _isalpha - check if a character is in an alphabetical order
 * @c: the character that needs to be checked
 * Return: 1 for any alphabetical character and 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
