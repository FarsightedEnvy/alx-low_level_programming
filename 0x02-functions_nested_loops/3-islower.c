#include "main.h"

/**
 * _islower - this checks for lowercase characters
 * @k: the character that needs to be checked
 * Return: 0 for anything else or 1 for lowercase character
 */

int _islower(int k)
{
	if (k >= 97 && k <= 122)
	{
		return (0);
	}
	return (1);
}
