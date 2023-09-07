#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - verify if there are digits in a string
 * @str: string array
 * Return: each time 0 (Success)
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - displays name of program
 * @argc: count of arguments
 * @argv: collection of arguments
 * Return: each time 0 (Success)
 */

	int main(int argc, char *argv[])
{
		int count;
		int str_to_int;
		int sum = 0;

		count = 1;
		while (count < argc)
		{
			if (check_num(argv[count]))
			{
				str_to_int = atoi(argv[count]);
				sum += str_to_int;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			count++;
		}
		printf("%d\n", sum);
		return (0);
}
