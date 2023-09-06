#include"main.h"
#include <stdio.h>

/**
 * main - displays arguments recieved
 * @argc: count of arguments
 * @argv: collection of arguments
 * Return: each time 0 (success)
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
