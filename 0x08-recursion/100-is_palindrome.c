#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
* is_palindrome - verifies a string is a palindrome
* @s: string to be reversed
* Return: 1 if it is, 0 if its not
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - provides string length
 * @s: string for length calculation
 * Return: strings length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - recursively examines characters for palindrome
 * @s: string to be verified
 * @i: iterator
 * @len: the length of the string
 * Return: 1 if palindrom, 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
