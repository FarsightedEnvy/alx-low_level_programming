#include "main.h"

/**
 * _islower - this checks for lowercase characters
 * @c: the character that needs to be checked
 * Return: 1 for any lowercase character and 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
