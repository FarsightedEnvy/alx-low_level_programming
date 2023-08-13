#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point for different two two-digit number combos
 * Return: each time 0 (success)
 */

int main(void)
{
	int k, s;

	for (k = 0; k < 100; k++)
	{
		for (s = 0; s < 100; s++)
		{
			if (k < s)
			{
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				putchar(' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);
				if (k != 98 || s != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
