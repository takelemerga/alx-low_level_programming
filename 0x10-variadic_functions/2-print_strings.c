#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string separator
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i = 0;

	char *str;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			str = va_arg(args, char *);
			if (!str)
				printf("%s", "(nil)");

			else if (i != n - 1 && separator != NULL)
				printf("%s%s",  str, separator);

			else
				printf("%s", str);

			i++;
		}

		va_end(args);
	}

	printf("\n");
}
