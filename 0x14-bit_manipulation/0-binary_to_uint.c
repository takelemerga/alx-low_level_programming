#include "main.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @b: The binary string to converts
  *
  * Return: The positive number converted from a binary
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, i = 0, dec = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			dec += 1 << i;

		i++;
	}

	return (dec);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
