#include "main.h"
/**
 * times_table - prints times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			_putchar(',');
			_putchar(' ');
			if ((i * j) >= 10)
			{
				_putchar((i * j) / 10 + 48);
				_putchar((i * j) % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar((i * j) + 48);
			}
		}
	_putchar('\n');
	}
}
