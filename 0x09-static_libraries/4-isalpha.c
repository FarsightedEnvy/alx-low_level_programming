#include "main.h"

/**
 * _isalpha - verifies the presence of alphabetical characters
 * @c: char that needs to be checked
 * Return: 1 for alphabetical character, 0 for anything else
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
