#include "main.h"

/**
 * _strlen - returns the length of a string
 * @c: c is pointer that holds character array base adress
 * Return: length of string
 */
int _strlen(char *c)
{
	int length = 0;

	while (*c != '\0')
	{
		length += 1;
	c++;

	}
	return (length);
}

/**
 * puts_half - prints the second half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int size, i, half;

	size = _strlen(str);
	half = (size % 2 == 0) ? size / 2 : (size-1) / 2;

	for (i = half; i < size; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
