#include <stdio.h>

/**
 * print_to_98 - prints every number from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf ("%i", n);
			n++;
		}
	else
	{
		while (n > 98)
		{
			printf("%i", n);
			n--;
		}
	printf(98);

	}
}
