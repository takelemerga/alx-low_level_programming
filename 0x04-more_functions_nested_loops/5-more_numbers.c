#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + 48);
			}
				_putchar(j % 10 + 48);
		j++;
		}
	i++;
	_putchar('\n');
	}
}
