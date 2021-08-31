#include <stdio.h>

/**
 * print_to_98 - prints every number from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int j = n;
	if (j <= 98)
	{
		while (j <= 98)
		{
			printf("%i", j);
				if (j != 98)
			printf(" ");
			j++;
		}
	}
	else
	{
		while (j > 98)
		{
			printf("%i", j);
			 printf(" ");
			j--;
		}
	printf("%i", 98);

	}
}
