#include <stdio.h>

/**
 * main - program entry point
 * Return: each time 0 (success)
 */

int main(void)
{
	char k, s;

	k = 'a';
	s = 'A';
	while
		(k <= 'z') {
			putchar(k);
			k++;
		}
	while
		(s <= 'Z') {
			putchar(s);
			s++;
		}
	putchar('\n');
	return (0);
}
