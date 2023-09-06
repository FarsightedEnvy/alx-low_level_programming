#include "main.h"
#include <stdio.h>

/**
 * main - displays program name
 * @argc: count of arguments
 * @argv: collection of arguments
 * Return: each time 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
