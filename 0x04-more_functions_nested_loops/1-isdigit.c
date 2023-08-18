#include "main.h"

/**
 * _isdigit - this function checks for a digit between 0 and 9
 * @c: input that requires validation
 * Return:  1 if c is a digit, otherwise, returns zero
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
