#include "main.h"
#include <stdio.h>

/**
 * _atoi - changes string to integer
 * @s: string for conversion
 * Return: int resulting from string conversion
 */

int _atoi(char *s)
{
	int k, d, n, len, f, digit;

	k = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (k < len && f == 0)
	{
		if (s[k] == '-')
			++d;

		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;

			f = 0;
		}
		k++;
	}
	if (f == 0)

		return (0);
	return (n);
}
/**
 * main - multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: each time 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
