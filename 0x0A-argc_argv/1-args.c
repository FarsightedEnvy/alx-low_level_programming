#include "main.h"
#include <stdio.h>

/**
 * main - output the count of arguments passed to a program
 * @argc: count of arguments
 * @argv: collection of arguments
 * Return: each time 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
