#include "main.h"
/**
*print_most_numbers-prints numbers 0-9 except 2 and 4
*/
void print_most_numbers(void)
{
	int m;

	for ( m = 0; m < 10; m++)
	{
		if (m == 2 || m == 4)
		continue;
		_putchar(m + 48);
	}
	_putchar('\n');
}
