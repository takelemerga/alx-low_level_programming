#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string s
 */
void rev_string(char *s)
{
	int size = 0;

	int i = 0;

	int k;

	char temp;

	while (*(s + i) != '\0')
	{
		size = size + 1;
		i++;
	}
	for (k = 0; k < size / 2;  k++)
	{
	temp = s[k];
	s[k] = s[(size - 1) - k];
	s[(size - 1) - k] = temp;
	}
	for (i = 0; i < size; i++)
	{
	_putchar(*(s + i));
	}
	_putchar('\n');
}

