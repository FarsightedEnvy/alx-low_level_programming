#include <stdio.h>

/**
 * main - program entry point
 * Return: each time 0 (success)
 */

int main(void)
{
	char k;

	int s;

	k = 'a';
	s = 0;
	while
		(s < 10) {
			putchar(s + '0');
			s++;
		}
	while
		(k <= 'f') {
			putchar(k);
			k++;
		}
	putchar('\n');
	return (0);
}
