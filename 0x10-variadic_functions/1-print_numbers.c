#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator string
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
			if (i != n - 1  && separator != NULL)
				printf("%s", separator);

		va_end(args);
	}
	printf("\n");
}
