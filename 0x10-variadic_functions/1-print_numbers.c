#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -displays numbers followed by a new line
 * @separator: string used for printing between numbers
 * @n: count of integers supplied to the function
 * @...: indeterminate quantity of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int ptr;

	va_start(nums, n);

	for (ptr = 0; ptr < n; ptr++)
	{
		printf("%d", va_arg(nums, int));
		if (ptr != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
