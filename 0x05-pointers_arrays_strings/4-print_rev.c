#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string s
 */
void print_rev(char *s)
{
	int size = 0;

	int i = 0;

	int k;

	while (*(s + i) != '\0')
	{
	size = size + 1;
	i++;
	}
	for (k = size - 1; k >= 0; k--)
	_putchar(s[k]);
	_putchar('\n');
}
