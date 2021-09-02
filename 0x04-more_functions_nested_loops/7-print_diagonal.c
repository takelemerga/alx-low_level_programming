#include "main.h"
/**
 * print_diagonal - print a diagonal line of variable length
 * @n: length of line
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
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
