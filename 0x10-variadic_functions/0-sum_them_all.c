#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);

		va_end(args);
		return (sum);
	}

	return (0);
}
