#include "main.h"
/**
 * print_diagonal - print a diagonal line of variable length
 * @n: length of line
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
		int k;

			for (k = 0; k < i; k++)
			{
			_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
