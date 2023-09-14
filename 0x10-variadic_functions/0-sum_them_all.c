#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -calculate the total by adding all parameters
 * @n: the count of arguments provided to the function
 * @...: calculate the sum of a variable number of parameters
 * Return: if n == 0 - 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int k, sum = 0;

	va_start(ap, n);

	for (k = 0; k < n; k++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
